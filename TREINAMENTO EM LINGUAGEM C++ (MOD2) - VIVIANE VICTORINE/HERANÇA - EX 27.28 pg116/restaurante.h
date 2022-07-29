#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "empresa.h"

class Restaurante: public Empresa
{
    public:
        Restaurante();
        Restaurante(string,double);
        void get();
        void print();
        virtual ~Restaurante();
    protected:
    private:
        string comida;
        double preco;
};

#endif // RESTAURANTE_H
