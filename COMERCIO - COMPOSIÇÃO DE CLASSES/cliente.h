#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>

using namespace std;

class Cliente
{
    public:
        Cliente();
        Cliente(string n, string t);
        void imprimir();
        Cliente solicitar();
        void cadastrar();
        virtual ~Cliente();
    protected:
    private:
        string nome;
        string telefone;
};

#endif // CLIENTE_H
