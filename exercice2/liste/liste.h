#ifndef LISTE_H
#define LISTE_H

using namespace std;


class Liste {
    int *T;
    int max1;
public:
    Liste(int=10);
    ~Liste();
    Liste(const Liste &);
    Liste &operator= (const Liste &);
    void saisie(int=0);
    void affiche(int=0);
};
#endif // LISTE_H
