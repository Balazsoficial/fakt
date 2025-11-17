//
// Created by Balazsofficial on 2025.11.17.
//
#include <iostream>
using namespace std;
int main() {
    string szavak[15]=  {"fuvola", "csirke", "adatok", "asztal", "fogoly", "bicska", "farkas", "almafa", "babona", "gerinc", "dervis", "bagoly", "ecetes", "angyal", "boglya"};
    srand(time(NULL));
    int v = rand() % 15;
    string s = szavak[v];
    int db =0;
    int ts=0;
    string tipp;
    while(db<6  && tipp!="stop") {
        cout << "Kerem a tippet: ";
        cin >> tipp;
        if(tipp!="stop") {
            ts++;
            string eredmeny ="";
            for(int i=0;i<6;i++) {
                if (s[i] == tipp[i]){                    db++;
                    eredmeny+=s[i];}

                else {

                    eredmeny+=".";
                }

            }
            cout <<"eredmeny: " <<eredmeny << endl;
        }
    }
    if (db==6)
        cout <<ts<< "Tippelessel sikerult kitalalni!! " << endl;




}