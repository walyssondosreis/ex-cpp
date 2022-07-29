#ifndef TEMPO_H
#define TEMPO_H


class Tempo
{
    public:
        Tempo();
        Tempo(int h,int m,int s);
        void init(int h,int m,int s);
        void imprime();
        void soma(Tempo x,Tempo y);
        Tempo soma(Tempo x);
        int subtrai(Tempo x, Tempo y);
        virtual ~Tempo();
    protected:
    private:
        int hora;
        int mins;
        int segs;
};

#endif // TEMPO_H
