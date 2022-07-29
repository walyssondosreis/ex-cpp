#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

using namespace std;

class Veiculo
{
    public:
        Veiculo();
        Veiculo(int,int,float);
        virtual ~Veiculo();
        void get();
        void print();
    protected:
    private:
        int Peso,
        VelocMax;
        float Preco;
};

#endif // VEICULO_H
