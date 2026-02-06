//
// Created by Balazsoficial on 2025.12.03.
//
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
int primes[24] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89};
using namespace std;
int lottosz[5]={};
int szamok[91];
int a =0 ;
struct lista {
    int num[5]={};
};
lista l[53] ={};


int volte() {
    for(int i=0;i<52;i++) {
        for(int j=0;j<5;j++) {
            if (szamok[l[i].num[j]]==0) {
                szamok[l[i].num[j]] =1;


            }

        }

    }
    bool volte =false; //olyan amit nem huztak ki
    for (int i =0; i<91;i++) {
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
    for (int i =0; i<91;i++) {
        if ((szamok[i]==1 )&& (i % 2 ==1)) {
            db ++;
        }

    }
    return db;

}
void f7() {
    cout <<endl;
    cout << "7. feladat" <<endl;
    ofstream fout ("/home/balazsoficial/CLionProjects/erettsegi/lottosz.dat" ,ios::app);
    fout <<endl<< lottosz[0] <<" "<< lottosz[1] <<" "<< lottosz[2]<<" " << lottosz[3]<<" " << lottosz[4] << endl;

    fout.close();
    ofstream fki ("/home/balazsoficial/Letöltések/lotto52.ki");
    for (int i =0; i<52;i++) {
        for (int j=0;j<5;j++) {
            fki<<l[i].num[j];
            fki << " ";
        }
        fki << endl;

    }
    fki << lottosz[0] << " " <<lottosz[1] <<" " <<lottosz[2] <<" " <<lottosz[3] << " " <<lottosz[4 ] << endl;
fki.close();
}
void f8() {
    cout <<endl;
    cout << "8. feladat" <<endl;
    int darab[91]={};
    ifstream fin("/home/balazsoficial/Letöltések/lotto52.ki");
    string s;
    for(int i=0;i<53;i++) {

        fin>>l[i].num[0]>>l[i].num[1]>>l[i].num[2]>>l[i].num[3]>>l[i].num[4];
    }


    for (int i =0; i<53;i++) {
        for (int j =0; j<5 ;j++) {
            darab[l[i].num[j]]++;
        }
    }
    for (int i =1;i<91 ; i++) {
        cout << darab[i]<< " ";
        if (i%15 ==0)
            cout <<endl;
    }
}
void f9() {
    for (int i =0 ;i<5;i++) {
        szamok[lottosz[i]]=1;
    }
    cout << endl;
    cout << "9.feladat " <<endl;
    for (int i =0; i<24;i++) {
        if (szamok[primes[i]]==0) {
            cout << primes[i] << " ";
        }
    }
}
int main() {


    cout << "Add meg az 52. het lottoszamait! "<< endl;
    cin>>lottosz[0]>>lottosz[1]>>lottosz[2]>>lottosz[3]>>lottosz[4];
    sort(lottosz,lottosz+5);

    for(int i=0;i<5;i++) {
        cout<<lottosz[i]<<" ";
    }
    cout << "kerek egy egesz szamot 1-51ig: " << endl;
    int het;
    cin>>het;
    ifstream fin("/home/balazsoficial/CLionProjects/erettsegi/lottosz.dat");
    string s;
    for(int i=0;i<52;i++) {

        fin>>l[i].num[0]>>l[i].num[1]>>l[i].num[2]>>l[i].num[3]>>l[i].num[4];
    }

    for(int i=0;i<5;i++) {
        cout<<l[het-1].num[i]<<" ";
    }

    cout << endl;

    cout <<endl;
    cout << "5. feladat" <<endl;
//5
    if (volte()) {
        cout << "Volt olyan amit nem huztak ki az 51 hetz alatt" << endl;

    }
    else
        cout << "Nem volt olyan szam amit nem huztak volna ki az 51 het alatt" <<endl;
    //6
    cout <<endl;
    cout << "6. feladat" <<endl;
    cout << paratlansum()  << " darab paratlan volt"<< endl;
    //7
    f7();
    //8
    f8();
    //9
    f9();


}
