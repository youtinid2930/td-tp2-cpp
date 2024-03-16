#include "liste.h"
#include<iostream>

using namespace std;


Liste::Liste(int x) {
    T = new int [max1=x-1];
}

Liste::~Liste() {
    delete [] T;
}

Liste::Liste(const Liste &liste) {
    T = new int [max1=liste.max1];
    for(int i=0;i<=max1;i++) {
        T[i] = liste.T[i];
    }
}

Liste &Liste:: operator=(const Liste &liste) {
    if(this != &liste){
        delete [] T;
        T = new int [max1=liste.max1];
        for(int i=0;i<=max1;i++) {
            T[i] = liste.T[i];
        }
    }
    return *this;
}

void Liste::saisie(int index) {
    if(index != max1 + 1) {
        cin >> T[index];
        saisie(index+1);
    }
}

void Liste::affiche(int index) {
    if(index != max1 + 1) {
        cout << T[index] << endl;
        affiche(index+1);
    }
}



