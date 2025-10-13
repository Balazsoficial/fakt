//
// Created by Balazsofficial on 2025.10.06.
//
#include<iostream>
using namespace std;
int main() {
    string s;
    cout <<" Kérem a szoveget: ";
    getline(cin,s);
    string regi="öüóqwertzuiopőúűáélkjhgfdsaíyxcvbnmMNBVCXYÍŰÁÉLKJHGFDSAQWERTZUIOPŐÚÓÜÖ";
    string uj = "öüóqwertzuiopőúűáélkjhgfdsaíyxcvbnmöüóqwertzuiopőúűáélkjhgfdsaíyxcvbnm";
    string ss ="";
    for(int i=0;i<s.length();i++) {
        if (regi.find(s[i])<regi.length()) {
            ss+=uj[regi.find(s[i])];
        }
    }

    s=ss;
    int i=0;
    while(s[i]==s[s.length()-i-1] && i<s.length()) {
        i++;
    }
    if (i<s.length()/2) {
        cout <<  "nem palindrom" << endl;
        cout << s;

    }
    else {
        cout <<  "palindrom" << endl;
        cout << s;
    }




}