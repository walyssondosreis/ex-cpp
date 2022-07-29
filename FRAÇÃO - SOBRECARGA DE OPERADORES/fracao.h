#ifndef FRACAO_H
#define FRACAO_H

#include <iostream>
using namespace std;


class Fracao
{
    public:
        Fracao();
        Fracao(int x);
        Fracao(double x);
        Fracao(int n,int d);
        void print();
        void simp();
        Fracao operator+(Fracao f);
        Fracao operator+(int x);
        Fracao operator-(Fracao f);
        Fracao operator*(Fracao f);
        Fracao operator/(Fracao f);
        Fracao operator++();
        Fracao operator++(int x);
        Fracao operator--();
        Fracao operator--(int x);
        bool operator>(Fracao f);
        bool operator<(Fracao f);
        bool operator>=(Fracao f);
        bool operator<=(Fracao f);

        operator double();
        operator int();

        virtual ~Fracao();
    protected:
    private:
        int num;
        int den;
};

#endif // FRACAO_H
