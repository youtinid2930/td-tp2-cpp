#include <iostream>
#include "chaine.h"

using namespace std;

int main()
{
    Chaine str1("hello");
    Chaine str2(str1);
    cout << "str1 est ";
    str1.affiche();
    cout << endl;
    cout << "str2 est ";
    str2.affiche();
    cout << endl;

    str2=" world!!";
    Chaine str3 = str1 + str2;
    cout << "str3 est ";
    str3.affiche();
    cout << endl;
    if(str1 == str2){
        cout << "oops , mais comment !" <<endl;
    } else {
        cout << "ok!"<<endl;
    }

    cout << str1[3] << endl;
    return 0;
}
