//
// Created by Balazsofficial on 2025.11.10.
//
#include <iostream>
#include <fstream>

using namespace std;
struct adat {
    double atlag;
    int szulev;
    string name;

};

typedef adat tabla[20];

int main() {
    tabla t;
    int n;
    ifstream f("S:/11/FAKT/cpp/asd.txt");
    n=0;
    string s;
    getline(f,s);
    while (!f.eof()) {
        n++;
        t[n].name=s;
        f>>t[n].szulev >> t[n].atlag;
        getline(f,s);
       getline(f,s); //elore olvas
    }
    f.close();

    for(int i=1;i<=n;i++) {
        cout << t[i].name << " " << t[i].szulev  <<"    "<<t[i].atlag<< endl;
        cout << n<<endl;
    }

}