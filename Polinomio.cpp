#include "Polinomio.h"
#include "Termino.h"
#include <string>
#include <sstream>
using namespace std;
pol::pol(string& poli)
{
    int a;
    stringstream temp;
    for (a=0;a<poli.lenght();a++){
        if(poli[a]=='+' || poli[a]=='-'){
             temp<<poli[a+1]<<poli[a+2]<<poli[a+4];
         Term b(temp);
         polinomio.push_front(b);
        }
    }
}
string pol::getstring(pol a){
    stringstream temp;
    int b;
    for(b=0;b<a.polinomio.size();b++){
        temp<<'+'<<getstring(*(a.pos+b))<<endl;
    return temp;
}
