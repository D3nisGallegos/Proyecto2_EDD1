#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Lista.h"

using namespace std; 

class Cola : public Lista{
	
	protected: 
	Persona* primero; 
	
	
		
	public:
		Cola();
		Persona* GETprimero();
		void SETprimero(Persona* );
		void ANULAR();
		Persona* FRENTE();
		void PONE(Persona* );
		void QUITA();
		bool VACIA();
		~Cola();

};

#endif