#include "restaurante.h"

Restaurante::Restaurante()
{
    //ctor
}
Restaurante::Restaurante(string c ,double p)
{
    comida=c;
    preco=p;
}
void Restaurante::get()
{
    Empresa::get();
    cout<<"\nDIGITE O TIPO DE COMIDA: ";
    getline(cin,comida);
    cout<<"\nDIGITE O PRECO: ";
    cin>>preco;
    cout<<endl;
}
void Restaurante::print()
{
    Empresa::print();
    cout<<"\nTIPO DE COMIDA: "<<comida;
    cout<<"\nPRECO: "<<preco<<endl;
}
Restaurante::~Restaurante()
{
    //dtor
}
