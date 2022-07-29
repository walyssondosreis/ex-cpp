#include <iostream>
//#include "Veiculo.h"
//#include "carro.h"
#include "carropolitico.h"

using namespace std;

int main()
{
    cout<<endl<<"CLASSE [VEICULO]================"<<endl;
    Veiculo v;
    v.setv(26,6.2,"BRANCO");
    v.imprimir();

    cout<<endl<<"CLASSE [CARRO]:VEICULO================"<<endl;
    Carro c;
    c.setcar(26,5.1,"PRETO",false,true);
    c.imprimir();
  //  c.imprimir();

   /* cout<<endl<<"CLASSE [CARRO POLITICO]:CARRO================"<<endl;
    CarroPolitico p;
    p.setv(30,5.6,"VERMELHO");
    p.setcar(false,false);
    p.setcp("LENINHA","SIM,SIM,SIM!",13);
    p.imprimir();
    p.imprimir();
    p.imprimirCP();
*/
    return 0;
}
