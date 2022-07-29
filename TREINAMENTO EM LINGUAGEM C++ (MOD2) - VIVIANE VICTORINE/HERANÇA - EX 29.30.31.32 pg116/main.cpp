// OBJETIVO: HERANÇA MÚLTIPLA

#include <iostream>

#include "Motor.h"
#include "Veiculo.h"
#include "CarroPasseio.h"
#include "Caminhao.h"

using namespace std;

int main(int argc, char** argv) {

    cout<<"\n\nCLASSE MOTOR>>>>>>>>>>>>>\n";
	Motor t(4,300);
	t.print();

    cout<<"\n\nCLASSE VEICULO>>>>>>>>>>>>>>>\n";
	Veiculo v(5000,140,6000);
	//v.get();
	v.print();

    cout<<"\n\nCLASSE CARRO DE PASSEIO: MOTOR,VEICULO>>>>>>>>>>>>>>>>>>\n";
	CarroPasseio cp("Rosa","FordK",4,180,1500,180,4000);
	//cp.get();
	cp.print();

    cout<<"\n\nCLASSE CAMINHAO: MOTOR,VEICULO>>>>>>>>>>>>>>>>>>\n";
	Caminhao m(4,2,5,4,180,5000,180,7000);
	//m.Motor::get(); //CHAMA A FUNÇÃO GET HERDADA DE MOTOR
	//m.get();
	m.print();


	return 0;
}
