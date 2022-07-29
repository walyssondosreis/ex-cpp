#ifndef VENDA_H
#define VENDA_H
#include <iostream>

using namespace std;

class Venda
{
    public:
        Venda();
        Venda(string dt);
        void imprimir();
        Venda solicitar();
        void cadastrar();


        virtual ~Venda();
    protected:
    private:
        string datavenda;
};

#endif // VENDA_H
