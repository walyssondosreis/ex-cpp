#ifndef EMPRESA_H
#define EMPRESA_H
#include <iostream>
#include <string>

using namespace std;

class Empresa
{
    public:
        Empresa();
        Empresa(string n,string en,string c,string es,string cp,string f);
        virtual ~Empresa();
        void get();
        void print();
    protected:
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string fone;

       // f4=f2+2;
       // f4=2+f2;

};

#endif // EMPRESA_H
