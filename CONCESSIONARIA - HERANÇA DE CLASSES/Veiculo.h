#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>

using namespace std;

class Veiculo
{
    public:
        Veiculo();
        void setv(int r, float m, string c);
        Veiculo getv();
        void imprimir();
        virtual ~Veiculo();

    protected:

    private:
        int aroroda;
        float tmotor;
        string cor;
};

#endif // VEICULO_H
