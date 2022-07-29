#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <string>
#include<cstdio>

using namespace std;

class Conta
{
    public:
        Conta();
        Conta(int,string,double);
        virtual ~Conta();
        virtual void get();
        virtual void print();

    protected:

    private:
        int numero;
        string titular;
        double saldo;

};

#endif // CONTA_H
