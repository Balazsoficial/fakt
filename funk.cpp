//
// Created by Balazsofficials on 2025.10.06.
//
#include<iostream>
using namespace std;
double r,t;
const double PI = 3.1415926535897932384626433832795;

void Beolvas() {
    cout << "Kérem a sugarat: ";
    cin >> r;
}
void Szamol() {
    t=r*r*PI;
}
void Kiir() {
    cout << "A kor terulete " << t;
}
int main() {
    Beolvas();
    Szamol();
    Kiir();




}