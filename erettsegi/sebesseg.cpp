//
// Created by Balazsofficial on 2026.01.05.
//
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
struct jarmu {
    string x;
    int m;

};
typedef jarmu jarmutomb[2001];
int db =0;
jarmutomb t;
int m; // hossz péterben
string telep;
bool vantelep;

void f1(){
    ifstream fin("S:/11/FAKT/cpp/erettsegi/ut.txt");
    fin >>m;
    int y;
    fin>>y;
    while (!fin.eof()) {
        db++;
        t[db].m =y;
        fin>> t[db].x;
        fin>>y;
    }
}
void f2() {
    cout << "Masodik feladat " <<endl;
    cout << "Telepuesek neve" << endl;
    for (int i =1 ; i<=db; i++)
        if (t[i].x.length()>=4) cout << t[i].x << endl;
}
void f3() {
    cout << "3as feladat" <<endl;
    cout << "Adja meg hany kilometer" <<endl;
    double km;
    cin >> km;
    int minseb =90;
    int i =1;
    while (t[i].m<=km*1000) {
        if (t[i].x.length()==2 && (stoi(t[i].x) < minseb))
            minseb = stoi(t[i].x);
        if (t[i].x.length()>=4 && (50 < minseb))
            minseb = 50;

        i++;
    }

    cout << "Az elso " << km  <<"km-en " << minseb << " km/h volt a legalacsonyabb megengedett sebesseg." << endl;


}
void f4() {
    cout << "4.feladat" <<endl;
    int bent =0;
    int start ;
    for (int i =1; i<=db ; i++) {
        if (t[i].x.length()>=4)
            start =t[i].m;
        if (t[i].x == "]" ) bent +=t[i].m-start;
    }
cout << " Az ut:" << round(10000*(double)bent/m) /100 << "szazaleka vezetett telepulesen keresztul" <<endl;
}
void f5() {
    cout << "5.feladat" <<endl;
    cout << "adja meg a telpules nevet ";

    cin >> telep;
    int i=1;
    while (i<db && t[i].x!=telep)i++;
    if (i<db)
    {
        vantelep=true;
        int tdb =0;
        int start =t[i].m;
        while (t[i].x!="]") {

            if (t[i].x.length()==2)
                tdb++;
            i++;
        }
            cout << "A sebessegkorlatozo tablak szama: " <<tdb <<endl;
        cout << "Az ut hossza a telepulesen belul: " << t[i].m-start <<endl;


    }
    else
        cout << "Nincs ilyen telepules"<<endl;

}
void f6() {
    cout << "6. feladat" <<endl;
    if (vantelep) {
        string elozonev= "";
        int elozokezdet = -1;
        int elozoveg =-1;
        int i=4;
        while (t[i].x!=telep) {
            if (t[i].x.length()>=4) {
                elozonev= t[i].x;
                elozokezdet= t[i].m;
            }
            else if (t[i].x=="]") {
                elozoveg = t[i].m;
            }
            i++;
        }
        int kezdet =t[i].m;
        while (t[i].x!="]") i++;
        int veg =t[i].m;
        i++;
        string kovetkezonev ="";
        int kovetkezokezd =-1;
        while (t[i].x.length()<=4 && i<=db) {
            i++;
        }
        if (i<db) {
            kovetkezokezd=t[i].m;
        }
        if (elozonev=="")
            cout <<"A legkozelebbi telepules: " << kovetkezonev <<endl;
        else if (kovetkezokezd==-0)
            cout <<"A legkozelebbi telepules: " << elozonev <<endl;
        else {
            if (kezdet-elozoveg<kovetkezokezd-veg)
                cout <<"A legkozelebbi telepules: " << elozonev <<endl;
            else
                cout <<"A legkozelebbi telepules: " << kovetkezonev <<endl;
        }

    }
}
int main(){
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();

};







