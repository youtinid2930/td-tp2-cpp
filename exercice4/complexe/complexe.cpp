#include "complexe.h"
#include<iostream>


using namespace std;

Complexe::Complexe() : Re(0), Im(0) {}

Complexe::Complexe(float real, float imag) : Re(real), Im(imag) {}

Complexe::Complexe(const Complexe &c) {
    Re = c.Re;
    Im = c.Im;
}

bool operator==(const Complexe &c1, const Complexe &c2) {
    return (c1.Re == c2.Re) && (c1.Im == c2.Im);
}

ostream &operator<<(ostream &out, const Complexe &c) {
    out << c.Re << " + " << c.Im << "i";
    return out;
}

Complexe operator+(const Complexe &c, float num) {
    return Complexe(c.Re + num, c.Im);
}

Complexe operator+(const Complexe &c1, const Complexe &c2) {
    return Complexe(c1.Re + c2.Re, c1.Im + c2.Im);
}

Complexe operator+(float num, const Complexe &c) {
    return Complexe(c.Re + num, c.Im);
}

Complexe &Complexe::operator+=(float num) {
    Re += num;
    return *this;
}

Complexe &Complexe::operator+=(const Complexe &c) {
    Re += c.Re;
    Im += c.Im;
    return *this;
}

Complexe &Complexe::operator-=(float num) {
    Re -= num;
    return *this;
}

Complexe &Complexe::operator-=(const Complexe &c) {
    Re -= c.Re;
    Im -= c.Im;
    return *this;
}

Complexe operator*(const Complexe &c, float num) {
    return Complexe(c.Re * num, c.Im * num);
}

Complexe operator*(const Complexe &c1, const Complexe &c2) {
    float real = c1.Re * c2.Re - c1.Im * c2.Im;
    float imag = c1.Re * c2.Im + c1.Im * c2.Re;
    return Complexe(real, imag);
}

Complexe operator/(const Complexe &c, float num) {
    if (num == 0) {
        cerr << "Error: Division by zero" << endl;
        exit(1);
    }
    return Complexe(c.Re / num, c.Im / num);
}

Complexe operator/(const Complexe &c1, const Complexe &c2) {
    if (c2.Re == 0 && c2.Im == 0) {
        cerr << "Error: Division by zero" << endl;
        exit(1);
    }
    float denominateur = c2.Re * c2.Re + c2.Im * c2.Im;
    float real = (c1.Re * c2.Re + c1.Im * c2.Im) / denominateur;
    float imag = (c1.Im * c2.Re - c1.Re * c2.Im) / denominateur;
    return Complexe(real, imag);
}

