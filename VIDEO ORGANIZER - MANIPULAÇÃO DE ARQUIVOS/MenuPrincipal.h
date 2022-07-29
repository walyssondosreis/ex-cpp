#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include <iostream>

using namespace std;

class MenuPrincipal
{
    public:
        MenuPrincipal();
        void start();
        virtual ~MenuPrincipal();
    protected:
    private:
        static string NomePrograma;
        void NomeProgramaPrint();
};

#endif // MENUPRINCIPAL_H
