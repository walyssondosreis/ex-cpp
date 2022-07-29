#include "cliente.h"

Cliente::Cliente()
{
    //ctor
}
Cliente::Cliente(string n, string t)
{
    nome=n;
    telefone=t;
}
void Cliente::imprimir()
{
    cout<<"\nNOME CLIENTE: "<<nome<<endl;
    cout<<"TELEFONE CLIENTE: "<<telefone<<endl;
}
Cliente Cliente::solicitar()
{
    Cliente c;
    c.nome=nome;
    c.telefone=telefone;
    return c;
}
void Cliente::cadastrar()
{
    cout<<"\nDIGITE NOME CLIENTE: ";
    cin(nome);
    cout<<"\nDIGITE TELEFONE CLIENTE: ";
    cin(telefone);
    cout<<endl;
}
Cliente::~Cliente()
{
    //dtor
}
