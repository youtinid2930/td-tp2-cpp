#include <iostream>
#include "liste.h"

using namespace std;

int main()
{
    Liste a(10);
    cout << "entrer un liste d'entier : "<<endl;
    a.saisie();
    cout << "la liste a de nombre est : " << endl;
    a.affiche();
    Liste b(a);
    cout << "la liste b apres l'affectation de a par la constructor par copie: " << endl;
    b.affiche();
    Liste c;
    c = b;
    cout << "la liste c apres l'affectation de b par (=): " << endl;
    c.affiche();

    return 0;
}
