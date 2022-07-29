#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>

using namespace std;

class Produto
{
    public:
        Produto();
        Produto(string d, float p, int e);
        void imprimir();
        Produto solicitar();
        void cadastrar();
        virtual ~Produto();
    protected:
    private:
        string descricao;
        float preco;
        int estoque;
};

#endif // PRODUTO_H
