#include "carro.h"

Carro::Carro()
{
    //ctor
}

Carro::~Carro()
{
    //dtor
}
void Carro::setcar(int r, float m, string k,bool d,bool c)
{
    Veiculo::setv(r,m,k);
    dirhidra=d;
    cambauto=c;
}
Carro Carro::getcar()
{
    Carro c;
    c.dirhidra=dirhidra;
    c.cambauto=cambauto;
    return c;
}
void Carro::imprimir()
{
    Veiculo::imprimir();
    cout<<"DIRECAO HIDRAULICA: "<<dirhidra<<endl;
    cout<<"CAMBIO AUTO: "<<cambauto<<endl;
    cout<<"NUMERO DE RODAS: 4"<<endl;
}
