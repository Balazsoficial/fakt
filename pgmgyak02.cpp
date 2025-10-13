//
// Created by Balazsofficial on 2025.10.06.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cin >>n;

    }while(n < 1);
    for(int i=0;i<n;i+=2) {
        cout << i << "  ";
    }
}