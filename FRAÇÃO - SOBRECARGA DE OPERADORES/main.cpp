#include <iostream>
#include "fracao.h"

using namespace std;

int main()
{
    Fracao f1(16,8);
    Fracao f2(256,180);
    Fracao f3;
    Fracao f4;
    double d;
    int i;
    f1.print(); //FRAÇÃO INICIAL
    f2.print(); //FRAÇÃO INICIAL
    f3=f1+f2;
    f4=f1+2;
    f4.print();
    f3.print();

  //  cout<<"\nVALOR DE F1: "<<d<<endl;
  //  cout<<"\nVALOR DE F2: "<<i<<endl;
    return 0;
}
