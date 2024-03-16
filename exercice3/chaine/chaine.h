#ifndef CHAINE_H
#define CHAINE_H


using namespace std;

class Chaine {
    int lchaine;
    char *str;
public:
    Chaine();
    Chaine(const char *texte);
    Chaine(const Chaine &);
    ~Chaine();
    void affiche();
    Chaine &operator=(const Chaine &);
    friend bool operator==(const Chaine &ch1, const Chaine &ch2);
    friend Chaine operator+(const Chaine &ch1, const Chaine &ch2);
    char &operator[](int index);
};
#endif // CHAINE_H
