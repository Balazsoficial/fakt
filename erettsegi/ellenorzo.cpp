//
// Created by Balazsofficial on 2025.11.24.
//
#include <iostream>
using namespace std;
int main() {
    cout << "kerem a TAJ-szamot:";
    int tajsz =0;
    cin >> tajsz;
    int sum=0;
    int tajszl[9]={};
    for(int i=8;i>=0;i--) {
        tajszl[i] = tajsz%10;
     tajsz =tajsz/10;
   // cout << tajszl[i];
    }
    cout << "az ellenorzo szamjegy: " << tajszl[8] << endl;

    for(int i=0;i<=6;i+=2) {
        sum+=tajszl[i]*3;
    }
    for(int i=1;i<=8;i+=2) {
        sum+=tajszl[i]*7;
    }
    cout << " A sorozatok osszege: " << sum << endl;
    if (sum%10 == tajszl[8]) {
        cout << "Helyes a szam! " << endl;
    }
    else
        cout << "Hibas a szam" << endl;



  //  cout << sum << endl;


}