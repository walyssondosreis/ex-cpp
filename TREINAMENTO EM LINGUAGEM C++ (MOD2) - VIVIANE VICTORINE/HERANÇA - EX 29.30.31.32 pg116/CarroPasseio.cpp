#include "CarroPasseio.h"

CarroPasseio::CarroPasseio()
{
    Cor="TRANSPARENTE";
    Modelo="NENHUM";
}
CarroPasseio::CarroPasseio(string c,string m,int nc,int p,int ps,int vm,float pr):Motor(nc,p),Veiculo(ps,vm,pr)
{
    Cor=c;
    Modelo=m;
}
CarroPasseio::~CarroPasseio()
{
    //dtor
}
void CarroPasseio::get()
{
    Motor::get();
    Veiculo::get();
    fflush(stdin);
    cout<<"DIGITE A COR DO CARRO: ";
    getline(cin,Cor);
    cout<<"\nDIGITE O MODELO DO CARRO: ";
    getline(cin,Modelo);
    cout<<endl;
}
void CarroPasseio::print()
{
    Motor::print();
    Veiculo::print();
    cout<<"COR: "<<Cor<<endl;
    cout<<"MODELO: "<<Modelo<<endl;
}
