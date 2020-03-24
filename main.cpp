#include "Termino.h"
#include "Polinomio.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string a="+1x+3x²+8x⁴";
    pol poli(a);
    cout<<poli.getstring(poli)<<endl;
    return 0;
}
