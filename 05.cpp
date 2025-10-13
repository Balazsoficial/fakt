//
// Created by Balazsofficial on 2025.10.06.
//
#include <iostream>
using namespace std;

int main() {
    string s,s1;
    int i = 0,n = 0;
    s.erase(i,n); //i-tol n db karakter
    //append
    s.append(s1);
    s.append(s1,1); //elso karaktert hozzafuzi s1bol
    s.append(s1,1,3); //1-3. karakterig hozzafuzi s1bol
    //insert
    s.insert(i,s1); //i helytol beszurja s1-et
    //replace
    s.replace(i,n,s1); //i tol n-db charactert s1re
    //resszoveg
    string s3=s.substr(i,n); //i-tol n-db karaktert
    //kereses
    int o = s.find(s1); //s-ben ,s1 balrol hanyadik karakter ha nagyobb mint a szoveg hossa akkor nincs benne
    o=s.find(s1,i); //i. karaktertol keresi
    int o1 = s.rfind(s1); // s-ben ,s1 jobbrol hanyadik karakter ha nagyobb mint a szoveg hossa akkor nincs benne



}