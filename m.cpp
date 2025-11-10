//
// Created by Balazsofficial on 2025.11.10.
//
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long a =0;
    long long int count =0;
   long long  int i=1;
    for (long long int j=1; j<=530000; j+=2) {
        a+=j*j;
        count++;
      //  cout <<count<<endl;

    }
    cout << a << endl;
}