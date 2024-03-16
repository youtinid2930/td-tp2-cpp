#ifndef PILEENTIER_H
#define PILEENTEIR_H

using namespace std;

class PileEntier {
    int max1; // nombre nax d'element de la pile
    int *adr; // adresse de tableau representer la pile
    int nelem; // nombre d'element courant de la pile
public:
    PileEntier(int n=100);
    ~PileEntier();
    PileEntier(const PileEntier&);
    void Empiler(int i);
    int Depiler();
    friend void operator<(PileEntier &pile,int n);
    friend void operator>(PileEntier &pile,int &n);
    bool Pleine();
    bool Vide();
    void affiche();
};
#endif // PILE d'ENTIER
