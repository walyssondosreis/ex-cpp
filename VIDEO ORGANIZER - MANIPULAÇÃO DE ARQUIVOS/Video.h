#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string.h>

using namespace std;

class Video
{
    public:
        Video();
        Video(string,string,string,int,int);
        virtual ~Video();
        void get();
        void print();
    protected:
    private:
        string titulo,
        categoria,
        sinopse;
        int classificacao, ano;

};

#endif // VIDEO_H
