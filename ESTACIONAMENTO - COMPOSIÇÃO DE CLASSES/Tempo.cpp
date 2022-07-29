#include "Tempo.h"
#include <iostream>
#include <cstdio>

using namespace std;

Tempo::Tempo()
{
    hora=0;
    mins=0;
    segs=0;
}
Tempo::Tempo(int h,int m,int s){

    hora=h;
    mins=m;
    segs=s;
}
void Tempo::init(int h,int m,int s){

    hora=h;
    mins=m;
    segs=s;
}
void Tempo::imprime(){
    //cout<<hora<<":"<<mins<<":"<<segs<<" ";
    printf("%.2d:%.2d:%.2d",hora,mins,segs);
}
void Tempo::soma(Tempo x, Tempo y){

    hora=x.hora+y.hora;
    mins=x.mins+y.mins;
    segs=x.segs+y.segs;
}
Tempo Tempo::soma(Tempo x){
    Tempo y;
    y.hora=hora+x.hora;
    y.mins=mins+x.mins;
    y.segs=segs+x.segs;
    return y;
}
int Tempo::subtrai(Tempo x, Tempo y){
      int sx;
      int sy;
      sx=(x.hora*3600)+(x.mins*60)+(x.segs);
      sy=(y.hora*3600)+(y.mins*60)+(y.segs);
      if(sy>sx) return sy-sx;
      else if(sx>sy) return sx-sy;
      else return sy-sx;
}
Tempo::~Tempo()
{
    //dtor
}
