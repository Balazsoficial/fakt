//
// Created by Balazsofficial on 2025.10.20.
//
#include <iostream>
using namespace std;



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

}

int main() {
    int  tombok[100];
    int szama;
    feladatbe1(tombok, szama);
    feladatki1(tombok,szama);
    nemerkezett(tombok, szama);



}