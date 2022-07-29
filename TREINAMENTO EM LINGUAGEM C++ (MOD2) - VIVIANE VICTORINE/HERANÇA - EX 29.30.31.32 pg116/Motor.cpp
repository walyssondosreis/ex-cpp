#include "Motor.h"

Motor::Motor()
{
	NumCilindro=0;
	Potencia=0;
}
Motor::Motor(int nc,int p)
{
	NumCilindro=nc;
	Potencia=p;
}
void Motor::print()
{
	cout<<"NUMERO DE CILINDROS: "<<NumCilindro<<endl;
	cout<<"POTENCIA: "<<Potencia<<" HP"<<endl;
}
void Motor::get()
{
	cout<<"DIGITE NUMERO DE CILINDROS DO MOTOR: ";
	cin>>NumCilindro;
	cout<<"\nDIGITE POTENCIA DO MOTOR(HP): ";
	cin>>Potencia;
	cout<<endl;

}
Motor::~Motor()
{
}
