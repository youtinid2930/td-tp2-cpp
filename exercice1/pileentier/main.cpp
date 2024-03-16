#include <iostream>
#include "pileentier.h"

using namespace std;

int main()
{
    PileEntier b(40);
    PileEntier a;
    for (int i = 0; i < 10; i++){
        a.Empiler(i);
    }
    for(int i = 0; i < 5; i++){
        b.Empiler(i);
    }

    cout << "le contenu de la pile a est :" << endl;
    a.affiche();
    cout << "le contenu de la pile b est :" << endl;
    b.affiche();
    for(int i = 0; i < 3; i++) {
        a.Depiler();
    }
    cout << "le contenu de la pile a apres la supression de 3 element :"<< endl;
    a.affiche();
    for(int i = 0; i < 3; i++) {
        b.Depiler();
    }
    cout << "le contenu de la pile b apres la supression de 3 element :"<< endl;
    b.affiche();
    for (int i = 0; i < 10; i++){
        a<i;
    }
    for(int i = 0; i < 5; i++){
        b<i;
    }
    cout << "le contenu de la pile a est :" << endl;
    a.affiche();
    cout << "le contenu de la pile b est :" << endl;
    b.affiche();
    int del;
    for(int i = 0; i < 3; i++) {
        a>del;
        cout << "suppression de "<<del<<endl;
    }
    cout << "le contenu de la pile a apres la supression de 3 element :"<< endl;
    a.affiche();
    for(int i = 0; i < 3; i++) {
        b>del;
        cout << "suppression de "<<del<<endl;
    }
    cout << "le contenu de la pile b apres la supression de 3 element :"<< endl;
    b.affiche();
    cout << "......." << endl;
    PileEntier c(6);
    c<12;
    c<142;
    c<21;
    c<4;
    c.affiche();
    cout <<"....."<<endl;
    c>del;
    cout << del;
    return 0;
}
