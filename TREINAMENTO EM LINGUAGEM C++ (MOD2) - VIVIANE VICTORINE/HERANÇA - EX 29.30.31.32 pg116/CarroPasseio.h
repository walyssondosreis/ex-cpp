#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H

#include <iostream>
#include <string>
#include "Motor.h"
#include "Veiculo.h"
#include <cstdio>
using namespace std;

class CarroPasseio: public Motor, public Veiculo
{
    public:
        CarroPasseio();
        CarroPasseio(string c,string m,int nc,int p,int ps,int vm,float pr);
        virtual ~CarroPasseio();
        void get();
        void print();
    protected:
    private:
        string Cor,
        Modelo;
};

#endif // CARROPASSEIO_H
