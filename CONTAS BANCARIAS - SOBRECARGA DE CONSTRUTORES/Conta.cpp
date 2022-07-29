#include "Conta.h"

Conta::Conta()
{
    //ctor
}
Conta::Conta(int n,string t, double s)
{
    numero=n;
    titular=t;
    saldo=s;
}

Conta::~Conta()
{
    //dtor
}
void Conta::get()
{
    cout<<"DIGITE NUMERO DA CONTA: ";
    cin>>numero;
    fflush(stdin);
    cout<<"\nDIGITE NOME DO TITULAR: ";
    getline(cin,titular);
    cout<<"\nDIGITE O VALOR: ";
    cin>>saldo;

}
void Conta::print()
{
    cout<<"\nNUMERO DA CONTA: "<<numero;
    cout<<"\nNOME DO TITULAR: "<<titular;
    cout<<"\nSALDO DA CONTA: "<<saldo;


}
