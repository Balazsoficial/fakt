//
// Created by Balazsoficial on 2025.12.03.
//
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int szamok[100];
int a =0 ;
struct lista {
    int num[5]={};
};
lista l[52] ={};


int volte() {
    for(int i=0;i<52;i++) {
        for(int j=0;j<5;j++) {
            if (szamok[l[i].num[j]]==0) {
                szamok[l[i].num[j]] =1;


            }

        }

    }
    bool volte =false; //olyan amit nem huztak ki
    for (auto i : szamok) {
        if (szamok[i]==0) {
            volte = true;
        }

    }
    return volte;

}
int paratlansum() {
    for(int i=0;i<52;i++) {
        for(int j=0;j<5;j++) {
            if (szamok[l[i].num[j]]==0) {
                szamok[l[i].num[j]] =1;


            }

        }

    }
   int db=0; //olyan amit nem huztak ki
    for (auto i : szamok) {
        if (szamok[i]==1 && i % 2 ==1) {    //rossu
            db ++;
        }

    }
    return db;

}
int main() {

    int lottosz[5]={};
    cout << "Add meg az 52. het lottoszamait! "<< endl;
    cin>>lottosz[0]>>lottosz[1]>>lottosz[2]>>lottosz[3]>>lottosz[4];
    sort(lottosz,lottosz+5);

    for(int i=0;i<5;i++) {
        cout<<lottosz[i]<<" ";
    }
    cout << "kerek egy egesz szamot 1-51ig: " << endl;
    int het;
    cin>>het;
    ifstream fin("S:/11/FAKT/cpp/lottosz.dat");
    string s;
    for(int i=0;i<52;i++) {

        fin>>l[i].num[0]>>l[i].num[1]>>l[i].num[2]>>l[i].num[3]>>l[i].num[4];
    }

    for(int i=0;i<5;i++) {
        cout<<l[het-1].num[i]<<" ";
    }

    cout << endl;
//5
    if (volte()) {
        cout << "Volt olyan amit nem huztak ki az 51 hetz alatt" << endl;

    }
    //6
    cout << paratlansum()  << " darab paratlan volt"<< endl;



}
