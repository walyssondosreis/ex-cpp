#include "Veiculo.h"

Veiculo::Veiculo()
{
    Peso=0;
    VelocMax=0;
    Preco=0;
}
Veiculo::Veiculo(int ps,int vm, float p)
{
    Peso=ps;
    VelocMax=vm;
    Preco=p;
}
Veiculo::~Veiculo()
{
    //dtor
}
void Veiculo::get()
{
    cout<<"DIGITE O PESO DO VEICULO(KG): ";
    cin>>Peso;
    cout<<"\nDIGITE A VELOCIDADE MAX DO VEICULO(KM/H): ";
    cin>>VelocMax;
    cout<<"\nDIGITE PRECO VEICULO(US$): ";
    cin>>Preco;
    cout<<endl;
}
void Veiculo::print()
{
    cout<<"PESO: "<<Peso<<" Kg"<<endl;
    cout<<"VELOCIDADE MAXIMA: "<<VelocMax<<" Km/h"<<endl;
    cout<<"PRECO: "<<Preco<<" US$"<<endl;

}
