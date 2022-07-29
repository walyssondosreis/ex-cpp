#include <iostream>
#include "tempo.h"
using namespace std;
tempo::tempo()
{
    //ctor
}

tempo::~tempo()
{
    //dtor
}
void tempo::settempo(int h,int m,int s)
{
    if(h<0||h>23) h=0;
    if(m<0||m>59) m=0;
    if(s<0||s>59) s=0;
    hora=h;
    minuto=m;
    segundo=s;
}
void tempo::mostrartempo()
{
    cout << hora<<":"<<minuto<<":"<<segundo<<endl;
}
