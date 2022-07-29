#ifndef ALUNO_H
#define ALUNO_H


class Aluno
{
    public:
        Aluno();
        virtual ~Aluno();
        void cadastraaluno();
        void imprimiraluno();
    protected:
    private:
        char nome[20];
        //std::string nome;
        int serie;
        int grau;
        static int naluno;

};

#endif // ALUNO_H
