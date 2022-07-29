#include "Video.h"

Video::Video()
{
    //ctor
}
Video::Video(string t,string cat,string s,int cl,int a)
{
    titulo=t;
    categoria=cat;
    sinopse=s;
    classificacao=cl;
    ano=a;
}
Video::~Video()
{
    //dtor
}
void Video::get()
{
    cout<<"\nDIGITE TITULO: ";
    getline(cin,titulo);
    cout<<"\nDIGITE CATEGORIA: ";
    getline(cin,categoria);
    cout<<"\nREDIJA SINOPSE: ";
    getline(cin,sinopse);
    cout<<"\nDIGITE CLASSIFICACAO: ";
    cin>>classificacao;
    cout<<"\nDIGITE ANO: ";
    cin>>ano;

}
void Video::print()
{
    cout<<"TITULO: "<<titulo<<endl;
    cout<<"CATEGORIA: "<<categoria<<endl;
    cout<<"SINOPSE: {"<<sinopse<<"}"<<endl;
    cout<<"CLASSIFICACAO: "<<classificacao<<endl;
    cout<<"ANO: "<<ano<<endl;

}
