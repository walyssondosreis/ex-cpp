#ifndef CAMINHAO_H
#define CAMINHAO_H
#include <iostream>

#include "Motor.h"
#include "Veiculo.h"

using namespace std;


class Caminhao: public Motor, public Veiculo
{
    public:
        Caminhao();
        Caminhao(int,int,int,int,int,int,int,float);
        virtual ~Caminhao();
        void get();
        void print();
    protected:
    private:
        int Toneladas,
        AlturaMax,
        Comprimento;
};

#endif // CAMINHAO_H
