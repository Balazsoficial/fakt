//
// Created by Balazsofficial on 2025.11.24.
//
#include <iostream>
using namespace std;
int main() {
string s1,elozo;
    cout << "1. szo:" ;
    cin >> s1;
    int i=2;

    do {
        cout << i << ".szo:";
        elozo=s1;
        cin >> s1;
        i++;
    }while (s1.length()==6 &&s1[0]==elozo[elozo.length()-1] );
    if (s1.length()!=6) {
        cout << "A karakterek szama teves!" << endl;
    }
    else if (s1[1]!=elozo[elozo.length()]) {
        cout  << "Nem illeszkedett" << endl;
    }
    i-=2;
    cout << "Helyes lepessek szama:" << i <<endl;

    if (i>=0 && i<=2 )
        cout << "Szint: kezdo" << endl;
    else if (i>=3 && i<=5 )
        cout << "Szint: kozepes" << endl;
    else if (i>=6  )
        cout << "Szint: halado" << endl;




}