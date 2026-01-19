//
// Created by Balazsofficial on 2025.11.10.
//
#include <iostream>
#include <fstream>
//2025 majus
using namespace std;
struct adat {
        int ev,negyed;
        string ered, nev;
        int db;

};

typedef adat konyv[500];
konyv k;
int n;
void f1() {
    ifstream f("S:/11/FAKT/cpp/kiadas2.txt");
    n=0;
    string s;
    getline(f,s,';');
    while (!f.eof()) {
        n++;
        k[n].ev=stoi(s);
        getline(f,s,';');
        k[n].negyed=stoi(s);
        getline(f,s,';');
        k[n].ered=s;
        getline(f,s,';');
        k[n].nev=s;
        getline(f,s);
        k[n].db=stoi(s);
        getline(f,s, ';');
    }
}
void f2() {
    cout << "masodik feladat" <<endl;
    cout <<"szerzo: " <<endl;
    string szerzo;
    getline(cin,szerzo);
    int kdb =0;
    for (int i=0;i<n;i++)
    if (k[i].nev.find(szerzo)<k[i].nev.length()) {
        kdb++;
    }
    if (kdb>0) {
        cout << kdb << " Konyv kiadas" <<endl;
    }
else
    cout << "Nem adtak ki" << endl;

}
void f3() {
    cout << "3. feladat " <<endl;
    int maxpld = k[1].db ;
    int maxdb =1;
    for (int i=0;i<n;i++) {
        if (k[i].db==maxpld) {
            maxdb++;
        }
        else {

            if (k[i].db>maxpld) {
                maxpld=k[i].db;
                maxdb=1;
            }

        }



    }
    cout << "Legnagyobb peldanyszam: " << maxpld << " Elofordult: "<< maxdb  << "alkalommal"<<endl;

}
void f4() {
    cout <<"4. feladat" << endl;
    int i =1;
    while (k[i].db<40000 || k[i].ered!="kf") {
        i++;
    }
    cout << k[i].ev << "/" << k[i].negyed << ". " << k[i].nev << endl;
}
void f5() {
    cout << "5 feladat" << endl;
    struct stat{
        int ev,mdb,mpld,kdb,kpld;

    };
    stat st[4];

    for (int i=0;i<4;i++) {
        st[i].ev = 2020+i;
        st[i].mdb = st[i].mpld = st[i].kdb = st[i].kpld = 0;
    }
    for (int i=1;i<=n;i++) {
        if (k[i].ered=="ma") {
            st[k[i].ev-2020].mdb++;
            st[k[i].ev-2020].mpld+=k[i].db;

        }

        else {
            st[k[i].ev-2020].kdb++;
            st[k[i].ev-2020].kpld+=k[i].db;




        }

    }
    cout <<"Ev \tMagyar kiadas \tMagyar peldanyszam \tKulfoldi kiadas \tkulfoldi peldanyszam" <<endl;
    for (int i=1;i<=3;i++) {
        cout <<st[i].ev <<"\t\t" <<st[i].mdb <<"\t\t" <<st[i].mpld <<"\t\t\t" <<st[i].kdb <<"\t\t\t" <<st[i].kpld <<endl;
    }

    //HTML
    ofstream fout("tabla.html");
    fout << "<table> <tr><th>Év</th><th>Magyar kiadás</th><th>Magyar példányszám</th><th>Külföldi kiadás</th><th>Külföldi példányszám</th></tr>"<<endl;
    for (int i=1;i<=3;i++) {
        fout << "<tr><td>"<<st[i].ev <<"</td><td>"<<st[i].mdb<<"</td><td>"<<st[i].mpld<<"</td><td>"<<st[i].kdb<<"</td><td>"<<st[i].kpld<<"</td></tr> " << endl;
    }
    fout << "</table>" << endl;
    fout.close();
}

void f6() {
    struct kiad {
        string nev;
        int db,hanyszor; //elsonel tobbszor = hanyszor //db : elso kiadas dbszama

    }kk[n+1];

    int kkdb =0;

    for (int i=0;i<=n;i++) {
        int j=1;
        while (j<=kkdb && kk[j].nev != k[i].nev) {
            j++;
        }
        if (j<=kkdb) {
            if (k[i].db>kk[j].db)
                kk[j].hanyszor++;
        }
        else {
                kkdb++;
                kk[kkdb].nev=k[i].nev;
                kk[kkdb].db=k[i].db;
                kk[kkdb].hanyszor=0;
            }

    }
    cout << "6. feladat" << endl;
    for (int i=1;i<=kkdb;i++) {
        if (kk[i].hanyszor>=2) {
            cout << kk[i].nev <<endl;
        }

    }


}
int main() {
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();

   // cout << n << endl;


}