//
// Created by Balazsofficial on 2025.11.17.
//
#include <iostream>
using namespace std;
int main() {
    string parancs = "";
    cout << "Kerem a robot parancsait: ";
    cin >> parancs;
    int kdb,ndb,ddb ;
    int edb = kdb = ndb = ddb = 0;
    for (int i =0; i< parancs.length(); i++) {
    switch (parancs[i]) {
        case 'E': edb++; break;
        case 'K': kdb++; break;
        case 'D': ddb++; break;
        case 'N': ndb++; break;
    }


    }
    cout <<"E betuk szama: " <<edb<<endl;
    cout <<"D betuk szama: " <<ddb<<endl;
    cout <<"K betuk szama: " <<kdb<<endl;
    cout <<"N betuk szama: " <<ndb<<endl;

    if (edb-ddb>0) for (int i =1; i<=edb-ddb; i++) cout <<"E";
    if (ddb-edb>0) for (int i =1; i<=ddb-edb; i++) cout <<"D";
    if (kdb-ndb>0) for (int i =1; i<=kdb-ndb; i++) cout <<"K";
    if (ndb-kdb>0) for (int i =1; i<=ndb-kdb; i++) cout <<"N";

}