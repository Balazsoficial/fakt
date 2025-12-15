//
// Created by Balazsoficial on 2025.12.03.
//
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
char a =' ' ;
struct lista {
    int num[5]={};
};

int main() {
    lista l[51] ={};
    int lottosz[5]={};
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
cin >>a;


}
