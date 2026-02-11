
//
// Created by szoldaticsnagybalazs on 2026.02.09.
//
#include<iostream>
#include<fstream>
#include <set>
using namespace std;

struct adatok {
    string id,time;
    int ekod{};
};
int db =0;
typedef  adatok adat;
adat t[2001];

void f1() {
    ifstream fin("S:/11/FAKT/cpp/erettsegi/bedat.txt");
    string s;
    fin>>s;
    while(!fin.eof()) {
        db++;
        t[db].id = s;
        fin>>t[db].time>>t[db].ekod>>s;
    }
    fin.close();
}
void f2() {
    cout << "2. feladat" <<endl;
    std::cout << "Az elso tanulo" << t[1].time << "-kor lepett be a kapun" << std::endl;
    std::cout <<"Az utolso tanulo" <<t[db].time << "-kor lepett ki a kapun.";
}
void f3() {
    ofstream fout("kesok.txt");
    for(int i=0;i<=db;i++) {
        if (t[i].ekod==1 && t[i].time>"7:50" && t[i].time<="08:15") {
            fout<<t[i].time<<" "<<t[i].id<<endl;
        }
    }
}
int mz_db =0;
void f4() {
    cout << "4.feladat" << endl;

    for(int i=0;i<=db;i++) {
        if (t[i].ekod ==3)
            mz_db++;
    }
    cout << "A menzán aznap " <<mz_db<<" tanuló ebédelt." << endl;

}
void f5() {
    cout << "5.feladat" << endl;
    set<string > kolcson;
    for(int i=0;i<=db;i++) {
        if (t[i].ekod ==4) {
            kolcson.insert(t[i].id);
        }
        cout << "Aznap " << kolcson.size() << " tanulo kolcsonzott a konyvtarban" << endl;



    }
    if (mz_db<kolcson.size()) {
        cout << "Tobben voltak, mint a menzan" <<endl;
    }
    else
        cout << "Nem voltak tobben" <<endl;
}
void f6() {
        cout << "6.feladat" << endl;
        for(int i=0;i<=db;i++) {
            if (t[i].ekod ==1 && t[i].time>"10:50" && t[i].time<="11:00") {
                int j=i-1;
                while (j>0 && t[j].id!=t[i].id)
                    j--;
                if (j>0 && t[j].ekod!=2) {
                    cout << t[j].id << " ";
                }
            }
        }


}
int main() {
    f1();
    f2();
    f3();

}