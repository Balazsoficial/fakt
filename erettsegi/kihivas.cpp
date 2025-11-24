//
// Created by Balazsofficial on 2025.11.24.
//
#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "1. feladat"<<endl;
    cout << "Adja meg az aktivitast: ";
    bool u,g,f,k;
    u=g=f=k=false;
    cin >> s;
    int sum =0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]=='U') {
            sum+=1;
            u=true;
        }
        else if (s[i]=='G') {
            sum+=1;
            g=true;
        }
        else if (s[i]=='F') {
            sum+=2;
            f=true;
        }
        else if (s[i]=='K') {
            sum+=10;
            k=true;
        }
    }
    cout << "2. feladat " <<endl;
    cout <<"Az elert tavolsag: " <<sum<< "km." << endl;
    cout << "3. feladat" << endl;
    if (g&&k&&f&&u) {
        cout << "Bravo jtalma meg 10 km. " << endl;
        sum+=10;
    }
    else
        cout << "Nem jar jutalom. " << endl;

    cout << "4.feladat" << endl;
    cout << "Eredmenye: " << sum<< "km.  ";
    if (sum>=40)
        cout << "Gratulalok, kihivas teljesitve!" << endl;
    else
        cout << "Legkozelebb sikerul" << endl;

}
