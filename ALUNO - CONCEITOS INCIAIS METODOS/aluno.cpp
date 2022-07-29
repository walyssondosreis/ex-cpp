#include <iostream>
#include "aluno.h"


using namespace std;
int Aluno::naluno=0;

Aluno::Aluno()
{
    naluno++;

}

Aluno::~Aluno()
{
    //dtor
}
void Aluno::cadastraaluno()
{
    cout<<"\nDIGITE NOME DO ALUNO: ";
    cin>>nome;
    cout<<"\nDIGITE A SERIE DO ALUNO: ";
    cin>>serie;
    cout<<"DIGITE O GRAU DO ALUNO: ";
    cin>>grau;

}
void Aluno::imprimiraluno()
{
    cout<<"ALUNO: "<<nome<<endl;
    cout<<"SERIE: "<<serie<<endl;
    cout<<"GRAU: "<<grau<<endl;
    cout<<"NALUNO: "<<naluno<<endl;

}
