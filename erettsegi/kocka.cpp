//
// Created by Balazsofficial on 2025.11.17.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Hany alkalommal legyen feldobas? " ;
    cin >> N;

    int adb=0,pdb=0;
    srand (time(NULL));
    for (int i = 0; i < N; i++) {
        int a = 1+rand() % 6;
        int c = 1+rand() % 6;
        int b = 1+rand() % 6;
        int d = a+b+c;
        if (d<10)adb++;
        else
        pdb++;
        cout << "Dobas: " << a << " + " << b << " + " << c << " = " << d << '\t' << "Nyert:";
        if (d<10) cout << "Anni" << endl;
        else cout << "Panni" << endl;
    }
    cout << "A jatek soran " << adb <<" alkalommal Anni, " << pdb<< " alkalommal Panni" << endl;


}