#include <iostream>
#include "Conta.h"
#include "CConjunta.h"
#include "CEspecial.h"
#include <stdlib.h>

using namespace std;

int main()
{
    /*Conta x;
    x.get();
    x.print();*/

    /* CConjunta u;
     u.get();
     u.print();*/

    /* CEspecial p;
     p.get();
     p.print();*/

    Conta *contas[100];


    int cont=0,i=0,opcao,u;

    for(i=0; i<100; i++)
    {
        system("cls");
        cout <<"1-CONTA COMUM(C)\n2-CONTA CONJUNTA(CC)\n3-CONTA ESPECIAL(CE)\n0-SAIR\n\nOPCAO: ";
        cin>>opcao;
        if(opcao==1)
        {
            u=cont++;
            contas[u]=new Conta();
            system("cls");
            contas[u]->get();
        }
        else if (opcao==2)
        {
            u=cont++;
            contas[u]=new CConjunta();
            system("cls");
            contas[u]->get();
        }
        else if(opcao==3)
        {
            u=cont++;
            contas[u]=new CEspecial();
            system("cls");
            contas[u]->get();
        }
        else if(opcao==0)break;

    }
    system("cls");
    for(i=0; i==u; i++) contas[i]->print();
    return 0;
}
