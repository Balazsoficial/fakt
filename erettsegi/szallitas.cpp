//
// Created by Balazsofficial on 2025.11.17.
//

#include <iostream>
using namespace std;
int main() {
    int szamok[15] = {16, 8, 9, 4, 3, 2, 4, 7, 7, 12, 3, 5, 4, 3, 2};
    int osszt;
    for (int i = 0; i < 15; i++) {
        osszt+=szamok[i];
    }
    cout << "A targyak tomegenek osszege: "<< osszt<< "kg " << endl;

    int dobozok=0;
    int dobozc=0;

    for (int i = 0; i < 15; i++) {
        dobozc+=szamok[i];
        if (i!=14 && dobozc+szamok[i+1] <=20){}

        else {
            cout << dobozc << " "  ;
            dobozok++;
            dobozc=0;
        }

    }
    cout <<endl;
    cout <<"A szukseges dobozok szama: " << dobozok;
}
