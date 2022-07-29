#include "Veiculo.h"

Veiculo::Veiculo()
{
    //ctor
}

Veiculo::~Veiculo()
{
    //dtor
}
void Veiculo::setv(int r, float m, string c)
{
    aroroda=r;
    tmotor=m;
    cor=c;
}
Veiculo Veiculo::getv()
{
    Veiculo v;
    v.aroroda=aroroda;
    v.tmotor=tmotor;
    v.cor=cor;
    return v;
}
void Veiculo::imprimir()
{
    cout<<"\nTAMANHO DAS RODAS: "<<aroroda<<endl;
    cout<<"TIPO DO MOTOR: "<<tmotor<<endl;
    cout<<"COR DO VEICULO: "<<cor<<endl;
}
