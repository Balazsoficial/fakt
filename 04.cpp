//
// Created by Balazsofficial on 2025.09.29.
//
#include<iostream>

using namespace  std;
int main() {
    string s;
    string mah="öüóőúaűáéeAŰÁÉEuUOÓÜÖÚŐíÍ";
    cout << "kerek szoveget " << endl;
    getline(cin, s);
    for (int i =0; i<s.length(); i++) {
        if (mah.find(s[i])<=mah.length()) {
            cout << mah.find(s[i])<<endl;
            s[i] ='*';
        }

    }
    cout << s << endl;

}