//
// Created by Balazsofficial on 2025.11.24.
//
#include <iostream>
using namespace std;
int main() {
    int meres[16] ={36, 48, 39, -1, 30, 43, -1, 76, 67, 82, 73, 75, 64, 73, 69, 63};
    cout << "2.feladat" << endl;
    int sum=0;
    int max=0;
    int ip=0;
    for (int i = 0; i < 16; i++) {
        if (meres[i]>max) {
             ip=i;
            max = meres[i];
        }

        if (meres[i] >=0)
        {sum += meres[i];}

    }
    cout << "osszesen " << sum << "kerekparost szamoltak."<<endl;
    cout <<endl;
    cout << "3. feladat" << endl;
    cout << "Orankenti meresek: " <<endl;
    cout << "6 oratol " ;
    int q=0;
    for (int i = 0; i <= 3; i++) {
        if (meres[i] >=0)
            q = q + meres[i];
    }
    cout << q <<"kerekparos" <<endl;

    cout <<"7 oratol " ;
    q=0;
    for (int i = 4; i <= 7; i++) {
        if (meres[i] >=0)
            q = q + meres[i];
    }
    cout << q <<"kerekparos" <<endl;

    cout <<"8 oratol " ;
    q=0;
    for (int i = 8; i <= 11; i++) {
        if (meres[i] >=0)
            q = q + meres[i];
    }
    cout << q <<"kerekparos" <<endl;

    cout <<"9 oratol " ;
    q=0;
    for (int i = 12; i <=15 ; i++) {
        if (meres[i] >=0)
            q = q + meres[i];
    }
    cout << q <<"kerekparos" <<endl;
cout << "Az athaladok maximalis szama: " <<max <<";" ;
    cout << "a rogzites idopontja: ";
    if (ip/4 ==0)
        cout << "6";
    else if (ip/4 ==1)
        cout << "7";
    else if (ip/4 == 2)
        cout << "8";
    else if (ip/4 == 3)
        cout << "9";
    cout << ":";
    if (ip%4 ==0)
        cout << "15";
    else if (ip%4 ==1)
        cout << "30";
    else if (ip%4 == 2)
        cout << "45";
    else if (ip%4 == 3)
        cout << "00";
    cout << ".";

}