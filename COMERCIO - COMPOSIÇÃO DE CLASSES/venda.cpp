#include "venda.h"
#include <iostream>

using namespace std;

Venda::Venda()
{
    //ctor
}
Venda::Venda(string dt)
{
    datavenda=dt;
}
void Venda::imprimir()
{
    cout<<"\nDATA DA VENDA: "<<datavenda<<endl;
}
Venda Venda::solicitar()
{
    Venda v;
    v.datavenda=datavenda;
    return v;
}

void Venda::cadastrar()
{
    cout<<"\nDIGITE DATA DA VENDA: ";
    cin(datavenda);
    cout<<endl;
}
Venda::~Venda()
{
    //dtor
}
