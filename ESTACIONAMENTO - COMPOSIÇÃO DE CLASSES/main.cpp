#include <iostream>
//#include "Tempo.h" //"Tempo.h" JÁ ESTA INCLUSO DENTRO DE "ESTACIONAMENTO.h"
#include "Estacionamento.h"

using namespace std;
void menu1(){
    int m=1;
    cout<<"\n\n\t\t\t\tESTACIONAMENTO\n\t\t\t\t--------------"<<endl;
    cout<<"\n(1) REGISTRAR ENTRADA";
    cout<<"\n(2) SAIDA DE VEICULO"<<endl;
    switch (m){
        case 1:
            Estacionamento t1,t2,t3,t4;
            cout<<"\nNUMERO DE OBJ ESTACIONAMENTO: "<<t1.registro();
            break;
//        case 2:
  //          cout<<"teste2";
    //         break;
    }


}
int main()
{
    menu1();


    return 0;
}
