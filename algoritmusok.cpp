
// Created by Balazsofficial on 2025.10.13.
//
#include <iostream>
typedef int elemtip;
constexpr int MAXN=100;
typedef elemtip sorozattip[MAXN+1];
using namespace std;
void sorozatbe(int &n,sorozattip &x) {
    do {
        cout << "Elemszam: " ;
        cin >> n;

    }while (n<0 || n>MAXN);
    for (int i=1; i<=n; i++) {
        cout << i << ". elem " ;
        cin >> x[i];

    }
}
void sorozatki(int n,  sorozattip x) {
    for (int i=1; i<n; i++) {
        cout <<x[i] << ", ";

    }
    cout << x[n] << ".  " << endl;
}
//sorozatszamitas -osszeg
void osszegszamitas(int n , sorozattip x, elemtip &szum) {
    szum =0;
    for (int i=1; i<=n; i++) {
        szum += x[i];
    }
}
bool jo(elemtip y) {
    //paros lesz a jo
    return (y%2==0);
}
//van e adott tulajdonsagu elem
void eldontes(int n , sorozattip x, bool &vane) {
    int i=1;
    while (i<=n &&!jo(x[i])) {
        i++;
    }
 /*       if (i<=n) vane =true;
        else vane=false;*/
        vane=(i<=n);


}
//megszamolas hany adott tul
void megszamols(int n, sorozattip x, int &hany) {
    hany=0;
    for (int i=1; i<=n; i++) {
        if (jo(x[i])) {
            hany++;
        }
    }
}
 //kereses - éinearis kerees
void kereses(int n , sorozattip x, bool &vane, int &hol,elemtip &mennyi) {
    int i=1;
    while (i<=n &&!jo(x[i])) {
        i++;
    }
    vane=(i<=n);
    if (vane) {
        hol=i;
        mennyi =x[i];
    }


}
//kivalasztas - tudjuk hogy van jo tulajdonsagu elem ,pelda
 void kivalasztas(int n , sorozattip x, int &hol,elemtip &mennyi) {
    int i=1;
    while (i<=n &&!jo(x[i])) {
        i++;
    }
    hol=i;
    mennyi =x[i];
}
//Maximum kivalasztas
void maximumkivalasztas(int n, sorozattip x, int &hol, elemtip &mennyi) {
    hol=1;
    for (int i=2; i<=n; i++)
        if (x[i]>x[hol])
            hol=i;
    mennyi =x[hol];

}
void masolas(int n, sorozattip x , int &nn ,sorozattip &xx) {
    for (int i=1; i<=n; i++) {
        xx[i]=x[i]*x[i]; //elem nagyzete
        nn=n ;
    }

}
//kivalogatas - osszes adott tulajdonsagu elemet
void kivalogatas(int n, sorozattip x, int &nn, sorozattip &xx){
    nn=0;
    for (int i=1; i<=n; i++) {
        if (x[i]%2==0) {
            nn++;
            xx[nn]=x[i];
        }
    }
}
//kivalogatas helyben
void kivalogatas(int &n, sorozattip &x){
    int nn=0;
    for (int i=1; i<=n; i++) {
        if (x[i]%2==0) {
            nn++;
            x[nn]=x[i];
        }
    }
}
//szétválogatas -jok/rosszak kulonsorozatba
void szetvalogatas(int n, sorozattip x, int &nn, sorozattip &xx, int &nnn , sorozattip  &xxx){
    nn=0;
    nnn=0;
    for (int i=1; i<=n; i++) {
        if (x[i]%2==0) {
            nn++;
            xx[nn]=x[i];
        }
        else {
            nnn++;
            xxx[nnn]=x[i];
        }
    }
}
int main() {

    sorozattip s, s1,s2;
    int db, db1,db2;
    sorozatbe(db,s);
    sorozatki(db,s);
    elemtip ossz;

    osszegszamitas(db,s,ossz);
    cout << "összegük  " << ossz << endl;
    bool van;

    eldontes(db,s,van);
    if (van) cout << "van paros elem" << endl;
    else cout << "nincs paros elem" << endl;
    int hanyjo;

    megszamols(db,s,hanyjo);
    cout <<"paros elemek szama " << hanyjo << endl;
    int sorszam;
    elemtip ertek;

    kereses(db,s,van,sorszam,ertek);
    if (van) cout << "egy paros elem sorszama: " << sorszam << " \n erteke: " << ertek << endl;
    else cout << "nincsen paros elem. \n";

    maximumkivalasztas(db,s,sorszam,ertek);
    cout << "egy legnagyobb sorszama:" << sorszam << " \n erteke: " << ertek << endl;

    masolas(db,s,db1,s1);
    cout << "elemek negyzete: ";
    sorozatki(db1,s1);

    kivalogatas(db, s,db1,s1);
    cout << "parosak: ";
    sorozatki(db1,s1);

    szetvalogatas(db,s,db1,s1,db2,s2);
    cout << "parosak: ";
    sorozatki(db1,s1);
    cout << "paratlanok : ";
    sorozatki(db2,s2);





}