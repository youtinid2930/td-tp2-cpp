#include "pileentier.h"
#include<iostream>


using namespace std;

PileEntier::PileEntier(int n){
    max1 = n;
    adr = new int [max1];
    nelem = 0;
}

PileEntier::~PileEntier(){
    delete [] adr;
}

PileEntier::PileEntier(const PileEntier&pile) {
    adr = new int [max1=pile.max1];
    nelem = pile.nelem;
    for (int i=0;i<nelem - 1;i++) {
        adr[i] = pile.adr[i];
    }
}

void PileEntier::Empiler(int i){
    if(Pleine() == 0){
        adr[nelem] = i;
        nelem++;
    }
}

int PileEntier::Depiler() {
    int del;
    del = adr[nelem - 1];
    adr[nelem - 1 ] = 0;
    nelem--;
    return del;
}

void operator<(PileEntier &pile,int n){
    if(pile.Pleine() == 0){
        pile.adr[pile.nelem] = n;
        pile.nelem++;
    }
}

void operator>(PileEntier &pile,int &n) {
    if(pile.Vide() == 0){
        n = pile.adr[pile.nelem - 1];
        pile.adr[pile.nelem - 1 ] = 0;
        pile.nelem--;
    }
}

bool PileEntier::Pleine() {
    return (max1 == nelem);
}

bool PileEntier::Vide() {
    return (nelem == 0);
}

void PileEntier::affiche() {
    for(int i = 0; i < nelem; i++){
        cout << adr[i] << endl;
    }
}
