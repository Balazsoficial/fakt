//
// Created by Balazsoficial on 2025.11.26.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int x,y,xbe,ybe,xvegul,yvegul;
string taj;

vector <string> sziget;

int main() {
    x=y=xbe=ybe=yvegul=xvegul=0;
    ifstream fin;
    fin.open("S:/11/FAKT/cpp/erettsegi/sziget.txt");
    string s;
    string sx;
    string sy;
    getline(fin, s);
    sx=s[0];
    sy=s[2];
    x=stoi(sx);
    y=stoi(sy);

    for(int i=0;i<y;i++) {
        getline(fin, s);
        sziget.push_back(s);
    }
 /*   for(int i=0;i<y;i++) {
        cout << sziget[i] << endl;
    }
*/
    cin >> xbe>>ybe;
    cin >>taj;

    for(int i=0;i<taj.length();i++) {
        switch(taj[i]) {
            case 'e':yvegul++;break;
            case 'n':xvegul--;break;
            case 'd':yvegul--;break;
            case 'k':xvegul++;break;
        }
    }
    xvegul+=xbe;
    yvegul+=ybe;
    cout << xvegul << endl;
    cout << yvegul << endl;

    cout << endl;
    cout << endl;
//
    if (xbe+xvegul >x )
        cout << "lement a maprol" << xbe+xvegul << endl;
    if (yvegul+ybe>y)
        cout << "lement a maprol" << ybe+yvegul << endl;
    if (yvegul+ybe<0)
        cout << "lement a maprol" << ybe-yvegul << endl;
    if ( xbe+xvegul<0)
        cout << "lement a maprol" << xbe-xvegul << endl;

    if (xbe+xvegul < x && yvegul+ybe<y && yvegul+ybe>=0 &&  xbe+xvegul>=0) {
        cout << sziget[yvegul][xvegul] << endl;
    }


    fin.close();

  //  cout << x << " " << y << endl;





}