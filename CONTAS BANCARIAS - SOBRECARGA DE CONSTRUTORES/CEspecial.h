#ifndef CESPECIAL_H
#define CESPECIAL_H
#include "Conta.h"

class CEspecial: public Conta
{
    public:
        CEspecial();
        virtual ~CEspecial();
        void get();
        void print();

    protected:

    private:
        double limite;
};

#endif // CESPECIAL_H
