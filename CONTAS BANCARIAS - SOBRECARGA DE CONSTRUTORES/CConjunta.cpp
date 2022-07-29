#include "CConjunta.h"

CConjunta::CConjunta()
{

}
CConjunta::CConjunta(int n,string t,double s):Conta(n,t,s)
{
    //ctor
}

CConjunta::~CConjunta()
{
    //dtor
}
void CConjunta::get()
{
    Conta::get();
    fflush(stdin);
    cout<<"\nDIGITE NOME SEGUNDO TITULAR: ";
    getline(cin,titular2);
}
void CConjunta::print()
{
    Conta::print();
    cout<<"\nSEGUNDO TITULAR: "<<titular2;

}
