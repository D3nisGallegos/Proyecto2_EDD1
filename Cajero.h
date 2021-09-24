#ifndef CAJERO_H
#define CAJERO_H
#include "Cola.h"
#include <iostream>
#include <string>
#include "Persona.h"

using namespace std; 

class Cajero{
	
	protected: 
	Lista* pila; 
	int numcajero;
	
	public:
		Cajero();
		Lista* GETpila();
		void SETpila(Lista* );
		int GETnumcajero();
		void SETnumcajero(int );
		string toString();
		~Cajero();
	protected:
};

#endif