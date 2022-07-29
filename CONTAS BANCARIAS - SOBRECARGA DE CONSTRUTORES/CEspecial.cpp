#include "CEspecial.h"

CEspecial::CEspecial()
{
    //ctor
}

CEspecial::~CEspecial()
{
    //dtor
}
void CEspecial::get()
{
    Conta::get();
    fflush(stdin);
    cout<<"\nDIGITE O LIMITE DA CONTA: ";
    cin>>limite;
}
void CEspecial::print()
{
    Conta::print();
    cout<<"\nLIMITE DA CONTA: "<<limite;

}
