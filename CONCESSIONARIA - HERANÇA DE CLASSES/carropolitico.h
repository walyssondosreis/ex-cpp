#ifndef CARROPOLITICO_H
#define CARROPOLITICO_H
#include "carro.h"
#include <iostream>

using namespace std;

class CarroPolitico: public Carro
{
    public:
        CarroPolitico();
        virtual ~CarroPolitico();
        void setcp(string c,string s,int n);
        CarroPolitico getcp();
        void imprimirCP();


    protected:

    private:
        string candidato;
        string slogan;
        int num;

};

#endif // CARROPOLITICO_H
