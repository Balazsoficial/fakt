//
// Created by Balazsofficial on 2025.11.10.
//
#include <iostream>
#include <fstream>

using namespace std;
struct adat {
        int ev,negyed;
        string ered, nev;
        int db;

};

typedef adat konyv[500];
konyv k;
int n;
void f1() {
    ifstream f("S:/11/FAKT/cpp/kiadas2.txt");
    n=0;
    string s;
    getline(f,s,';');
    while (!f.eof()) {
        n++;
        k[n].ev=stoi(s);
        getline(f,s,';');
        k[n].negyed=stoi(s);
        getline(f,s,';');
        k[n].ered=s;
        getline(f,s,';');
        k[n].nev=s;
        getline(f,s,';');
        k[n].db=stoi(s);
    }
}

int main() {
    f1();
    for(int i=0;i<11;i++) {
        cout << k[i].ev << " " << k[i].negyed << "  " << k[i].ered <<  "    " << k[i].nev << "  " <<k[i].db<< endl;

    }
    cout << n << endl;


}