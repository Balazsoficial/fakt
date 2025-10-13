//
// Created by Balazsofficial on 2025.10.06.
//
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>> n;
    bool prim=true;
    for(int i=2;i<sqrt(n);i++) {
        if (n%i==0) {
            prim=false;

        }
    }
    if (prim && n!=1) {
        cout << "Prime" << endl;
    }
    else
        cout << "Not Prime" << endl;

}