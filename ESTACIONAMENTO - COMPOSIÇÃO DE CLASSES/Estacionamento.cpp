#include "Estacionamento.h"

int Estacionamento::reg=0;

Estacionamento::Estacionamento()
{
    horaEntrada.init(0,0,0);
    horaSaida.init(0,0,0);
    Estacionamento::reg+=1;
}
Estacionamento::Estacionamento(string p, string m,Tempo e,Tempo s)
{
    placa=p;
    modelo=m;
    horaEntrada=e;
    horaSaida=s;
    Estacionamento::reg+=1;
}

void Estacionamento::imprime()
{
    cout<<"\nPLACA: "<<placa;
    cout<<"\tMARCA: "<<modelo<<endl;
    horaEntrada.imprime();
    cout<<"\t";
    horaSaida.imprime();
}

float Estacionamento::valor()
{
    float tx;
    tx=1;
    float tmp;
    tmp=horaEntrada.subtrai(horaEntrada,horaSaida);
    tmp/=3600;
    return tx*tmp;



}
int Estacionamento::registro()
{
    return reg;
}

Estacionamento::~Estacionamento()
{
    Estacionamento::reg-=1;
}
