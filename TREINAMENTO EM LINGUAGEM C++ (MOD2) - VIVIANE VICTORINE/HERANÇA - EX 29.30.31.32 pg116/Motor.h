#ifndef MOTOR_H
#define MOTOR_H
#include <iostream>
//#include <string>
using namespace std;

class Motor
{
	public:
		Motor();
		Motor(int,int);
		~Motor();
		void print();
		void get();
    protected:
	private:
		int NumCilindro,
		Potencia;
};

#endif
