//
// Created by Balazsofficial on 2025.12.08.
//
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;
char bsa[1001];
int bsadb =0;
struct amino {
    string rov;
    char betu;
    int c;
    int h;
    int o;
    int n;
    int s;
    int rmt;

};
const int aminodb=20;
typedef amino aminotomptip[aminodb+1];
aminotomptip a;
void f1() {
    ifstream fin("S:/11/FAKT/cpp/aminosav.txt");
    for(int i=1;i<=aminodb;i++) {
        fin>>a[i].rov>>a[i].betu>>a[i].c>>a[i].h>>a[i].o>>a[i].n>>a[i].s;
    }
    fin.close();


}
void f2() {
    for(int i=1;i<=aminodb;i++) {
        a[i].rmt=a[i].c*12 + a[i].o*16 + a[i].n*14 + a[i].s*32 + a[i].h;
    }
}
void f3() {
    cout << "3.feladat" <<endl;
    for(int i=1;i<=aminodb;i++) {
        for(int j=i+1;j<=aminodb;j++) {
            if(a[i].rmt>a[j].rmt) {
                swap(a[i],a[j]);
            }
        }
    }

    ofstream fout("S:/11/FAKT/cpp/eredmeny.txt");
    for(int i=1;i<=aminodb;i++) {
        fout<<a[i].rov<<" " << a[i].rmt<<endl;
        cout<<a[i].rov<<" " << a[i].rmt<<endl;


    }
}
void f4() {
    ifstream fin("S:/11/FAKT/cpp/bsa.txt");

    char x;
    fin >> x;
    while(!fin.eof()) {
        bsadb++;
        bsa[bsadb]=x;
        fin >> x;
    }
    fin.close();
    int cdb,odb,hdb,ndb,sdb=0;
    odb=cdb=hdb=ndb=0;
    for(int i=1;i<=bsadb;i++) {

        int j =1;
        while (a[j].betu!=bsa[i]) j++;
        cdb+=a[j].c;
        ndb+=a[j].n;
        sdb+=a[j].s;
        hdb+=a[j].h;
        odb+=a[j].o;
    }
    hdb-=2*(bsadb-1);
    odb-=bsadb-1;
    cout << "C " <<cdb<<" "<<hdb<<" H "<<odb<<" O  "<<ndb <<" N " << sdb << " S "<<endl;
    ofstream fout("S:/11/FAKT/cpp/eredmeny.txt",ios::app);
    fout << "C " <<cdb<<" "<<hdb<<" H "<<odb<<" O  "<<ndb <<" N " << sdb << " S "<<endl;
    fout.close();


}
void f5() {
    cout << "5.feladat" <<endl;
    int le,lu,lv,lh=-1,i=1,e=1;
    while(i<=lv) {
        if (bsa[i]=='Y' || bsa[i]=='W'||bsa[i]=='F' || i==bsadb) {
            if (i-e+1>lh) {
                le=e;
                lu=i;
                lh=i-e+1;
            }
            e=i+1;

        }
        i++;
    }
    ofstream fout("S:/11/FAKT/cpp/eredmeny.txt",ios::app);
    if (lh!=bsadb)
    {
        cout << "A leghosszabb lanc kezdete = " << le << ", vege=" << lu << ", hossza=" <<lh<<endl;
    fout << "A leghosszabb lanc kezdete = " << le << ", vege=" << lu << ", hossza=" <<lh<<endl;
}else {
        cout << "nem hasadt a lanc"<<endl;
        fout << "nem hasadt a lanc"<<endl;
    }
    fout.close();
}
void f6() {
    cout << "6.feladat" <<endl;
    int i=1,cidb=0;
    while (i<=bsadb-1 &&!(bsa[i]=='R' && (bsa[i+1]=='A' ||bsa[i+1]=='V'))) {
        if(bsa[i]=='C')
        cidb++;
        i++;
    }
    ofstream fout("S:/11/FAKT/cpp/eredmeny.txt",ios::app);
    if (i<=bsadb-1) {
        cout << "Az elso feherjelanc resletben " << cidb << " db cisztein van." << endl;
        fout << "Az elso feherjelanc resletben " << cidb << " db cisztein van." << endl;
    }
    else {
        cout << "nem volt elso lanc."<<endl;
        fout << "nem volt elso lanc."<<endl;
    }
    fout.close();
}
int main() {
    f1();
    f2();
    f3();
    f4();
    f5();

}