#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include "Tempo.h"
#include <iostream>

using namespace std;

class Estacionamento
{
    public:
        Estacionamento();
        Estacionamento(string p, string m,Tempo e,Tempo s);
        void imprime();
        float valor();
        int registro();
        virtual ~Estacionamento();
        static int reg;
    protected:
    private:
        string placa;
        string modelo;
        Tempo horaEntrada;
        Tempo horaSaida;

};

#endif // ESTACIONAMENTO_H
