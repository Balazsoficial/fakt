//
// Created by Balazsoficial on 2025.11.21.
//
#include <iostream>
using namespace std;
int main() {
    int uvegek[15]={5, 2, 2, 4, 3, 2, 4, 10, 5, 5, 3, 5, 4, 3, 3};
    int L =0;
    cout << "2. feladat" << endl;
    do {
        cout << "Mari neni lekvarja(dl):";
        cin >> L;

    }while (0>L>200);
    int legnagyobb,hanyadik;
    for(int i=0;i<15;i++) {
        if (uvegek[i]>legnagyobb)
        {        legnagyobb = uvegek[i];
            hanyadik = i;}
            }
    cout << "3. feladat" << endl;
    cout << "A legnagyobb uveg:" << legnagyobb <<" dl es "<<hanyadik<<". a sorban"<< endl;
    cout <<"4. feladat" << endl;
    int osszeg=0;
    for(int i=0;i<15;i++) {

        osszeg+=uvegek[i];

    }
    if (osszeg >L)
        cout << "Elegendo uveg volt " <<endl;
    else
        cout << "Maradt lekvar" <<endl;
}