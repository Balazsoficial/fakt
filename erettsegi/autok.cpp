//
// Created by Balazsofficial on 2026.01.19.
//
#include<iostream>
#include<fstream>
#include <iomanip>
#include <set>
using namespace std;


struct adatok {
    string rendszam;
    int ora,perc,sebesseg;
};
typedef adatok adatoktomb[2001];
int db =0;
adatoktomb t;
void f1() {
    ifstream fin("S:/11/FAKT/cpp/jeladas.txt");
    string x;
    fin >> x;
    while (!fin.eof()) {
        db++;
        t[db].rendszam = x;
        fin>>t[db].ora>>t[db].perc>>t[db].sebesseg>>x;
    }
    fin.close();
}
void f2() {
    cout << "2. feladat " <<endl;
    cout <<"Az utolso jeladas idopontja " <<t[db].ora <<":" << t[db].perc <<", a jarmu rendszama "<<t[db].rendszam<< endl;
}
void f3() {
    cout  << "3. feladat" <<endl;
   string rsz = t[1].rendszam;
    cout << "elso jarmu: " << rsz << endl;
    cout << "Jeladasanak idopontjai: " ;
    for (int i=1;i<=db;i++) {
        if (t[i].rendszam == rsz) {
            cout << t[i].ora << ":" << t[i].perc << "  ";
        }
    }
    cout << endl;

}
void f4() {
    int ora,perc;
    cout << "4. feladat" <<endl;
    cout <<"Kerem adja meg az orat: " ;
    cin>> ora;
    cout <<"Kerem adja meg az percet: " ;
    cin >> perc;
    int mennyi=0;
    for (int i=1;i<=db;i++) {
        if (t[i].ora==ora && t[i].perc==perc) {
            mennyi++;
        }
    }
    cout << "A jeladasok szama: " << mennyi << endl;
}
void f5() {
    int vmax = t[1].sebesseg;
    for (int i=1;i<=db;i++) {
        if (t[i].sebesseg>vmax) {
            vmax = t[i].sebesseg;
        }
    }
    cout << "5.feladat" <<endl;
    cout << "A legnagyobb sebesseg: " << vmax  << "km/h"<< endl;
    cout  << "Jarmuvek: ";
    for (int i=1;i<=db;i++) {
        if (t[i].sebesseg==vmax) {
            cout << t[i].rendszam ;
        }
    }
}
void f6() {
    cout << "6.feladat" <<endl;
    cout <<"Kerem adja meg a rendszamot: " ;
    string rendszam;
    cin >> rendszam;
    int elozo =0;
    double etav=0;
    bool volt = false;
    cout << fixed << setprecision(1);
    for (int i=1;i<=db;i++) {
        if (t[i].rendszam==rendszam) {
            cout << t[i].ora << ":" << t[i].perc << "  ";
            if (volt) {
                double h =(t[i].ora *60 + t[i].perc)- ( t[elozo].ora * 60 + t[i].perc);
                etav += h*t[elozo].sebesseg;
                cout <<etav << endl;
            }
            else {
                cout << "0.0" <<endl;
                elozo =i;
                volt = true;
            }
        }
    }
    if (!volt) {
        cout << " Nem szerepel a bekért rendszámú jármű" << endl;
    }
}
void f7() {
    ofstream fout("S:/11/FAKT/cpp/ido.txt");
    set<string> r;
    for (int i=1;i<=db;i++) {
        if (r.count(t[i].rendszam)==0) {
            fout <<t[i].rendszam << " " << t[i].ora << " " << t[i].perc << " ";
            int j=db;
            while (t[j].rendszam!=t[i].rendszam) {
                j--;
            }
            fout << t[j].ora << " " << t[j].perc << " ";
            r.insert(t[i].rendszam);


        }
    }

}
int main() {
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
}
