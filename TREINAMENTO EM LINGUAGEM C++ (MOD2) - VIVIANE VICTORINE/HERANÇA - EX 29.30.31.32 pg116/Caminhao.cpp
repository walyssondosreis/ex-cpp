#include "Caminhao.h"

Caminhao::Caminhao()
{
    Toneladas =0;
    AlturaMax=0;
    Comprimento=0;
}
Caminhao::Caminhao(int t,int amx,int c,int nc,int p,int ps,int vmx,float pr):Motor(nc,p),Veiculo(ps,vmx,pr)
{
    Toneladas=t;
    AlturaMax=amx;
    Comprimento=c;
}

Caminhao::~Caminhao()
{
    //dtor
}
void Caminhao::get()
{
    Motor::get();
    Veiculo::get();
    cout<<"DIGITE NUM TONELADAS DO CAMINHAO(T): ";
    cin>>Toneladas;
    cout<<"\nDIGITE A ALTURA MAXIMA DO CAMINHAO(m): ";
    cin>>AlturaMax;
    cout<<"\nDIGITE O COMPRIMENTO DO CAMINHAO(m): ";
    cin>>Comprimento;
    cout<<endl;

}
void Caminhao::print()
{
    Motor::print();
    Veiculo::print();
    cout<<"TONELADAS: "<<Toneladas<<" T"<<endl;
    cout<<"ALTURA MAXIMA: "<<AlturaMax<<" m"<<endl;
    cout<<"COMPRIMENTO: "<<Comprimento<<" m"<<endl;

}
