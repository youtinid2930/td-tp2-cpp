#include <iostream>
#include "complexe.h"

using namespace std;

int main()
{
    Complexe defaut,zero(0.0,0.0),un(1.0,0.0),i(0.0,1.0),j;
    cout << zero << " ==? " <<defaut << endl;
    if (zero == defaut) {
        cout << "oui" << endl;
    }
    else {
        cout << "non" << endl;
    }
    j = un + i;
    cout << un << " + " << i << " = " << j << endl;
    Complexe trois(un);
    trois += un;
    trois += 1.0;
    cout << un << " + " << un << " +1.0 = " << trois << endl;
    Complexe deux(trois);
    deux -= un;
    cout << trois << " - " << un << " = " << deux << endl;
    trois = 1.0 + deux;
    cout << "1.0 + " << deux << " = " << trois << endl;
    Complexe z(i*i);
    cout << i << " * " << i << " = " << z << endl;
    cout << z << " / " << i << " = " << z/i << endl;
    return 0;
}
