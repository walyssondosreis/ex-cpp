#ifndef MANIP_H
#define MANIP_H
#include <iostream>
#include "Filme.h"
#include "Serie.h"

using namespace std;

class Manip
{

    public:
        Manip();
        void CadastroFilme();
        void ReadArq();
        virtual ~Manip();
    protected:
    private:
        FILE *ARQ;
        Filme f;
};

#endif // MANIP_H
