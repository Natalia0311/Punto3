#ifndef _POLINOMIO_H
#define _POLINOMIO_H
#include "Termino.h"
#include "Polinomio.h"
#include <string>
#include <sstream>
#include <list>
using namespace std;
class pol{
    private:
    list<Term>polin;
    list<Term>::iterator pos=polin.begin();
    public:
    pol(string& poli);
    string getstring(pol a);
};


#endif //_POLINOMIO_H
