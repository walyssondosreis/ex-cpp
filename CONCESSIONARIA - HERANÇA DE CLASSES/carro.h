#ifndef CARRO_H
#define CARRO_H
#include "Veiculo.h"

class Carro: public Veiculo
{
    public:
        Carro();
        virtual ~Carro();
        void setcar(int r, float m, string k,bool d,bool c);
        Carro getcar();
        void imprimir();

    protected:

    private:
        bool dirhidra;
        bool cambauto;
};

#endif // CARRO_H
