#include "empresa.h"


Empresa::Empresa()
{
    //ctor
}
Empresa::Empresa(string n,string en,string c,string es,string cp,string f)
{
    nome=n;
    endereco=en;
    cidade=c;
    estado=es;
    cep=cp;
    fone=f;

}
Empresa::~Empresa()
{
    //dtor
}
void Empresa::get()
{
    cout<<"\nDIGITE NOME: ";
    getline(cin,nome);
    cout<<"\nDIGITE ENDERECO: ";
    getline(cin,endereco);
    cout<<"\nDIGITE CIDADE: ";
    getline(cin,cidade);
    cout<<"\nDIGITE ESTADO: ";
    getline(cin,estado);
    cout<<"\nDIGITE CEP: ";
    getline(cin,cep);
    cout<<"\nDIGITE FONE: ";
    getline(cin,fone);

}
void Empresa::print()
{
    cout<<"\nNOME: "<<nome<<endl;
    cout<<"ENDERECO: "<<endereco<<endl;
    cout<<"CIDADE: "<<cidade<<endl;
    cout<<"ESTADO: "<<estado<<endl;
    cout<<"CEP: "<<cep<<endl;
    cout<<"FONE: "<<fone;
}
