//
// Created by Balazsoficial on 2025.11.21.
//

#include <iostream>
using namespace std;
int main() {
    int dobasok[18] ={3, 1, 1, 2, 1, 5, 5, 4, 4, 4, 1, 2, 3, 6, 4, 6, 1, 4};
    int jelenlegi =0;
    int visszas =0;
    cout << "2. feladat" << endl;
    for (int i = 0; i <  18; i++) {
            jelenlegi += dobasok[i];

        if (jelenlegi%10==0) {
            jelenlegi -=3;
            visszas++;
        }

        cout << jelenlegi <<"   ";
    }
    cout << "3. feladat " << endl;
    cout << "A jatek soran " << visszas <<" alkalommal lepett letrara" <<  endl;
    cout <<"4. feladat" << endl;
    if (jelenlegi>=45) {
        cout <<"A jatekot befejezte. " << endl;

    }
    else
        cout << "A jatekot abbahagyta" << endl;




}