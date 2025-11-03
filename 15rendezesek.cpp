//
// Created by Balazsofficial on 2025.10.20.
//
#include <algorithm>
#include <iostream>
using namespace std;


double atlagg;
void feladatbe1(int *tomb, int &mennyi ) {
    cout << " Mennyi versenyzo van" << endl;
    cin >> mennyi;

    int szavazatokszama;
    for (int i = 0; i <= mennyi-1; i++) {
        cin >> szavazatokszama;
        tomb[i] = szavazatokszama;
    }

}
void feladatki1(int *tomb, int &mennyi) {

    for (int i=0; i<mennyi-1; i++) {
        cout << tomb[i] << " , ";
    }
    cout << tomb[mennyi-1] << endl;




}
void atlag(int * tomb, int &mennyi ) {

    int temp{};
    for (int i = 0; i <= mennyi-1; i++) {
        temp+=i;
    }
    atlagg =  double(temp/mennyi);
    cout << "Atlag: " << double(temp/mennyi) << endl;
}
bool nemerkezett(int * tomb, int &mennyi ) {
    for (int i = 0; i <= mennyi-1; i++) {
        if (tomb[i]==0) {
            cout << "volt olyan" << endl;
            return true;
        }}
        return  false;

}
void atlagfelett(int * tomb, int &mennyi ) {
    int db;
    for (int i = 0; i <= mennyi-1; i++) {
        if (tomb[i] > atlagg) {
            db++;
        }
    }
    cout << db  << "-Darab versenyzőnek több az átlagnál"<< endl;
}
void legtobb(int * tomb, int &mennyi) {
    int max=0;
    int hely=0;
    for (int i = 0; i <= mennyi-1; i++) {
            if (tomb[i]<max){
                max=tomb[i];
                hely =i;
        }
    }
    cout << max  << "-Db volt a legtobb a " <<hely+1<<". helyen"<< endl;

}
void negyjegyu(int * tomb, int &mennyi) {
    for (int i = 0; i <= mennyi-1; i++) {
        if (tomb[i]/1000 >0 && tomb[i]/1000 <10)
            cout << tomb[i] << "peldaul jo " << endl;
    }

}
void haromalaloho(int * tomb, int &mennyi){
    for (int i = 0; i <= mennyi-1; i++) {
        if (tomb[i]%3 ==0)
            cout << i+1 << "helyen 3al oszthato" <<endl;
    }
}
void hatjegyu(int * tomb, int &mennyi) {
    int legk =999999;
    for (int i = 0; i <= mennyi-1; i++) {
        if (tomb[i]/100000 >0 && tomb[i]/100000 <10) {
            if (legk>tomb[i])
                legk=tomb[i];
        }


    }
    cout << legk << "a legkisebb 6jegyu" <<endl;

}
void paroskilences(int * tomb, int &mennyi) {
    int osszeg =0;
    for (int i = 0; i <= mennyi-1; i++) {
    if (tomb[i]%2==0) {
        osszeg+=i+1;

    }

    }
    cout << "osszesen" << osszeg << endl;
}
void azonos (int * tomb, int &mennyi) {
    int seen[100];
    int azon=0;
    bool volt;
    for (int i = 0; i <= mennyi-1; i++) {
        seen[i]=-1;
    }
    for (int i = 0; i <= mennyi-1; i++) {

        for (int j = 0; j <=mennyi-1; j++) {
            if (tomb[i]==seen[j]) {
               azon++;
                volt=true;

            }
        }
        if (volt!=true) {
            seen[azon]=tomb[i];
            volt=false;
        }
    }
    cout << "szereplő számok: " ;
    for (int i = 0; i <= azon-1; i++) {
        cout << seen[i] << " ";
    }
    cout << "osszesen "<< azon << "db" << endl;
}
void csokkeno(int * tomb, int &mennyi) {
    sort(tomb,tomb+mennyi,std::greater<int>());
    for (int i = 0; i <= mennyi-1; i++) {
        cout << tomb[i] << " ";
    }
}
int main() {
    int  tombok[100];
    int szama;
    feladatbe1(tombok, szama);
    feladatki1(tombok,szama);
    nemerkezett(tombok, szama);
    atlag(tombok, szama);
    legtobb(tombok, szama);
    negyjegyu(tombok, szama);
    azonos(tombok, szama);





}