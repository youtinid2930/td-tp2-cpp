#ifndef COMPLEXE_H
#define COMPLEXE_H

#include <iostream>

using namespace std;

class Complexe {
    float Re;
    float Im;
public:
    Complexe();
    Complexe(float,float);
    Complexe(const Complexe &);
    friend bool operator==(const Complexe &,const Complexe &);
    friend ostream &operator<<(ostream &,const Complexe &);
    friend Complexe operator+(const Complexe &,float);
    friend Complexe operator+(const Complexe &,const Complexe &);
    friend Complexe operator+(float, const Complexe &);
    Complexe &operator+=(float);
    Complexe &operator+=(const Complexe &);
    Complexe &operator-=(float);
    Complexe &operator-=(const Complexe &);
    friend Complexe operator*(const Complexe &,float);
    friend Complexe operator*(const Complexe &,const Complexe &);
    friend Complexe operator/(const Complexe &,float);
    friend Complexe operator/(const Complexe &,const Complexe &);
};

#endif // COMPLEXE_H

