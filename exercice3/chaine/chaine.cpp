#include<iostream>
#include "chaine.h"


using namespace std;


Chaine::Chaine(){
    str = new char [lchaine=1];
    str[0] = '\0';
}

Chaine::Chaine(const char *texte) {
    int i = 0;
    while(texte[i] != '\0') {
        i++;
    }
    lchaine = i;
    str = new char[lchaine + 1];
    for(i = 0; i < lchaine; i++) {
        str[i] = texte[i];
    }
    str[lchaine] = '\0';
}

Chaine::Chaine(const Chaine &ch) {

    str = new char [lchaine = ch.lchaine];
    int i = 0;
    while(ch.str[i] != '\0'){
        str[i]=ch.str[i];
        i++;
    }
    str[lchaine]='\0';
}

Chaine::~Chaine() {
    delete [] str;
}

void Chaine::affiche(){

    for(int i=0;i<lchaine;i++){
        cout << str[i];
    }
}

Chaine &Chaine::operator=(const Chaine &ch) {
    if(this != &ch){
        str = new char [lchaine = ch.lchaine];
        int i = 0;
        while(ch.str[i] != '\0'){
            str[i]=ch.str[i];
            i++;
        }
        str[lchaine]='\0';
    }
    return *this;
}

bool operator==(const Chaine &ch1, const Chaine &ch2) {
    if (ch1.lchaine == ch2.lchaine) {
        for (int i = 0; i < ch1.lchaine; i++) {
            if (ch1.str[i] != ch2.str[i]) {
                return false;
            }
        }
        return true;
    }
    return false;
}


Chaine operator+(const Chaine &ch1, const Chaine &ch2) {
    Chaine texte;
    texte.str = new char[texte.lchaine = ch1.lchaine + ch2.lchaine - 1];
    int i = 0;
    while (ch1.str[i] != '\0') {
        texte.str[i] = ch1.str[i];
        i++;
    }
    int j;
    for (i = ch1.lchaine,j = 0; i <= texte.lchaine; i++, j++) {
        texte.str[i] = ch2.str[j];
    }
    return texte;
}

char &Chaine::operator[] (int index) {
    if(index < 0 || index > lchaine) {
        throw out_of_range("cette indice hors taille");
    }
    return str[index];
}


