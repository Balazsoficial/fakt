//
// Created by Balazsofficial on 2025.09.29.
//
#include <cmath>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double x = 3.1415926;
    cout  << setprecision(8) << x << endl;
    cout << round(1000*x)/1000 << endl;

    cout << trunc(x) << endl;
    //--
    cout << " irj be szoveget " << endl;
    string s;
    cin >> s;
    cout << s << endl;
    cin.ignore(256, '\n');
    getline(cin, s);
    cout << s << endl;



}