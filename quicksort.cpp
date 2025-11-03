//
// Created by Balazsofficial on 2025.11.03.
//
#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

//#define DB 2000000
//#define DB 100000
#define DB 20000000
typedef int sorozat[DB];
sorozat t,t1;

void general()
{
    for (int i=0; i<DB; i++) t[i]=rand()%1000;
}
void ki(sorozat x)
{
    for (int i=0;i<DB; i++) cout<<t[i]<<" ";
    cout<<endl;
}
void masol(sorozat x, sorozat& y)
{
    for (int i=0; i<DB; i++) y[i]=x[i];
}

/*
Eljárás szetvalogat(Vált. a:sorozat, Konst. e,u: egész, Vált. k:egész):  // e az elsö, u az utolsó elem sorszáma
    Vált. v,x: egész
    k:=e    // az elsö elem lesz a kezdö sorszám
    v:=u    // az utolsó elem lesz a végsö sorszám
    x:=a(k) // eltárolja a kiválasztott elemet (a kezdö elemet)
    CIKLUS AMÍG k<v                     // addig ismétli, amíg a kezdet nem éri el a véget
        CIKLUS AMÍG k<v ÉS a(v)>=x      // amig ... és hátulról haladva nem kisebb a vizsgált elem, megy viszafelé
            v:=v-1
        CIKLUS VÉGE
        HA k<v AKKOR a(k):=a(v)         // ha ..., akkor beteszi a kezdö sorszáma a kivett elemet és növeli a kezdet sorszámát
                     k:=k+1
                     CIKLUS AMÍG k<v ÉS a(k)<=x    // amíg ... és elöröl nem nagyobbak az elemek, addig megy tovább
                        k:=k+1
                     CIKLUS VÉGE
                     HA k<v AKKOR a(v):=a(k)    // ha ..., akkor beteszi a végsö sorszámra a kivett elemet,
                                  v:=v-1        // és csökkenti a végsö sorszámot
                     ELÁGAZÁS VÉGE
        ELÁGAZÁS VÉGE
    CIKLUS VÉGE
    a(k):=x         // k=v bekövetkezett, ide beteszi a kivett elemet
Eljárás vége
*/

void szetvalogat(sorozat& a, int e, int u, int& k)
{
    int v,x;
    k=e;
    v=u;
    x=a[k];
    while (k<v) {
        v=v-1;

        if (k<v) {
            a[k]=a[v];
            k=k+1;
            while (k<v && a[k] <=x) {
                k=k+1;
            }
            if (k<v) {
                a[v]=a[k];
                v=v-1;
            }
        }
    }
    a[k]=x;
}


/*
Eljárás quicksort(Vált. a:sorozat, Konst. e,u:egész):
    Vált. k:egész
    szetvalogat(a,e,u,k)    // szétválogatja helyben a sorozatot, a kiválasztottnál nem nagyobbak balra...
    HA k-e>1 AKKOR quicksort(a,e,k-1)   // ha 1-nél több elemü a bal oldali sorozat, akkor gyorsrendezi azt
    HA u-k>1 AKKOR quicksort(a,k+1,u)   // ha 1-nél több elemü a jobb oldali sorozat, akkor gyorsrendezi azt
Eljárás vége
*/

void quicksort(sorozat& a, int e, int u)
{
    int k;
    szetvalogat(a,e,u,k);
    if (k-e>1)
        quicksort(a,e,k-1);

    if (u-k>1)
        quicksort(a,k+1,u);


}


void cseres(sorozat& x)
{
    for (int i=0; i<DB-1; i++)
        for (int j=i+1;j<DB;j++)
            if (x[i]>x[j]) { int seged=x[i]; x[i]=x[j]; x[j]=seged; }
}

void oraindul(time_t& kezd)
{
    time(&kezd);
}

void oraki(time_t start)
{
    time_t stop;
    time(&stop);
    double mp = difftime(stop,start);
    cout<<"Futási idö: "<<mp<<endl;
}

int main()
{
    SetConsoleCP(1250);
    SetConsoleOutputCP(1250);
    time_t start,stop;

    srand(time(NULL));
    general();
    //ki(t);
    masol(t,t1);        // elmentem a generált sorozatot

    if (DB<=100000)
    {
        cout<<"*** CSERÉS RENDEZÉS INDUL ***"<<endl;
        oraindul(start);    // eltárolja az indulás idejét
        cseres(t);
        oraki(start);       // kiírja a futási idöt, paramétere a kezdet ideje!!!
        //ki(t);
        masol(t1,t);        // visszamásolom az eredeti sorozatot

    }


    cout<<"*** GYORSRENDEZÉS INDUL ***"<<endl;
    oraindul(start);    // eltárolja az indulás idejét
    quicksort(t,0,DB-1);
    oraki(start);       // kiírja a futási idöt, paramétere a kezdet ideje!!!
    //ki(t);
    masol(t1,t);        // visszamásolom az eredeti sorozatot


    cout<<"*** VALAMI INDUL***"<<endl;
    oraindul(start);
    //sort(&t[0],&t[DB]);
    oraki(start);
    //ki(t);
    return 0;
}
