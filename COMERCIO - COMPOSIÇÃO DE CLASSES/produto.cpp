#include "produto.h"

Produto::Produto()
{
    //ctor
}
Produto::Produto(string d, float p, int e)
{
    descricao=d;
    preco=p;
    estoque=e;
}
void  Produto::imprimir()
{
    cout<<"\nDESCRICAO PRODUTO: "<<descricao<<endl;
    cout<<"PRECO PRODUTO: R$ "<<preco<<endl;
    cout<<"ESTOQUE PRODUTO: "<<estoque<<endl;
}
Produto Produto::solicitar()
{
    Produto p;
    p.descricao=descricao;
    p.preco=preco;
    p.estoque=estoque;
    return p;
}

void Produto::cadastrar()
{
    cout<<"\nDIGITE DESCRICAO PRODUTO: ";
    cin(descricao);
    cout<<"\nDIGITE PRECO PRODUTO: ";
    cin(preco);
    cout<<"\nDIGITE ESTOQUE PRODUTO: ";
    cin(estoque);
    cout<<endl;
}

Produto::~Produto()
{
    //dtor
}
