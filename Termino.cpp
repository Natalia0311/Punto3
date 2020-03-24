#include <string>
#include "Termino.h"
#include <iostream>


Term::Term(int pot, float cof, char var){
    _coef =cof;
    _pot = pot;
    _var= var;
}
string Term::getstring(Term& T) {
    stringstream temp;
    temp<<T._coef<<T._var<<'^'<<T._pot<<endl;
    return temp.str();
}
Term::Term(string& db){
    _coef=atof(db[0]);
    _var=db[1];
    _pot=atof(db[3]);
}
