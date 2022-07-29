#ifndef TEMPO_H
#define TEMPO_H


class tempo
{
    public:
        tempo();

        void settempo(int h,int m,int s);
        void mostrartempo();

        virtual ~tempo();
    protected:
    private:
        int hora,minuto,segundo;
};

#endif // TEMPO_H
