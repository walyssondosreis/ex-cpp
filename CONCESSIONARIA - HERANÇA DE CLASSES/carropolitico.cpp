#include "carropolitico.h"

CarroPolitico::CarroPolitico()
{
    //ctor
}

CarroPolitico::~CarroPolitico()
{
    //dtor
}
void CarroPolitico::setcp(string c,string s,int n)
{
    candidato=c;
    slogan=s;
    num=n;
}
CarroPolitico CarroPolitico::getcp()
{
    CarroPolitico cp;
    cp.candidato=candidato;
    cp.slogan=slogan;
    cp.num=num;
    return cp;
}
void CarroPolitico::imprimirCP()
{
    cout<<"CANDIDATO: "<<candidato<<endl;
    cout<<"SLOGAN: "<<slogan<<endl;
    cout<<"VOTE EM MIM: "<<num<<endl;
}

