//
// Created by Balazsoficial on 2026.02.04.
//
#include <cmath>
#include <iostream>
#include <windows.h>
#include <fstream>

using namespace  std;

struct tabla {
 //nem 0tol
 string sor[27] ={};
 string oszlop[27] ={};

};

typedef tabla tabla;

tabla t;

int main() {
 setlocale(LC_ALL, "");
 SetConsoleCP(1250);
 SetConsoleOutputCP(1250);
 string nyilt ="";
 cin >>nyilt;

 for (int i = 0; i < nyilt.length(); i++) {
  if (nyilt[i] =='á')
   nyilt[i] = 'a';
  if (nyilt[i] =='ó' || nyilt[i] =='ö' || nyilt[i] =='ő')
   nyilt[i] = 'o';
  if (nyilt[i] =='é')
   nyilt[i] = 'e';
  if (nyilt[i] =='ű' || nyilt[i] =='ü' || nyilt[i] =='ú')
   nyilt[i] = 'u';
  if (nyilt[i] =='í')
   nyilt[i] = 'i';
 }
 for ( int i =0; i<nyilt.length();i++) {
  nyilt[i] = toupper(nyilt[i]);
 }
 cout << nyilt;
 string kulcs;
 cout << "Irj be egy kulcsszot" << endl;
 cin >> kulcs;
 for ( int i =0; i<kulcs.length();i++) {
  nyilt[i] = toupper(kulcs[i]);
 }
string Kulcs_szoveg ="";
 for (int i = 0; i <= nyilt.length()/kulcs.length(); i++) {
   Kulcs_szoveg += kulcs;
 }

    Kulcs_szoveg=Kulcs_szoveg.substr(0,nyilt.length());
 cout << "A kapott kulcsszoveg: " ;
 cout << Kulcs_szoveg << endl;


 //f5

 ifstream fin("S:/11/FAKT/cpp/erettsegi/Vtabla.dat");

 string s;
 for (int j = 1 ;j<=26 ;j++)
 {
 getline(fin,s);
 for (int i =1; i<=26;i++) {
   t.sor[i] = s[i-1];
 }
 }




}