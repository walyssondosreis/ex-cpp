#include <iostream>
#include "tempo.h"

using namespace std;

class Data{

    private:
        int dia;
        int mes;
        int ano;
    public:

        Data(int d,int m,int a){ //função contrutora (CONSTRUTOR), unica função sem retorno
            setdata(d,m,a);
        }

        void setdata(int d,int m,int a){
            dia=d;
            mes=m;
            ano=a;
        }
        void mostrardata(){
        cout <<dia<<"/"<<mes<<"/"<<ano<<endl;
        }


};

int main()
{
    Data d1(11,8,2016); //usando método construtor
    Data d2(12,8,2016);
    Data d3(13,8,2016);
   // tempo t1;
  //d1.setdata(11,8,2016); //usando metodo comum para inicializar
  //d2.setdata(12,8,2016);
  //d3.setdata(13,8,2016);
  d1.mostrardata(); // imprime data
  d2.mostrardata();
  d3.mostrardata();
    return 0;
}
