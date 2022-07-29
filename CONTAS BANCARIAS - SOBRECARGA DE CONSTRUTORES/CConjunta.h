#ifndef CCONJUNTA_H
#define CCONJUNTA_H
#include "Conta.h"

class CConjunta: public Conta
{
    public:
        CConjunta();
        CConjunta(int,string,double);
        virtual ~CConjunta();
        void get();
        void print();

    protected:

    private:
        string titular2;
};

#endif // CCONJUNTA_H
