#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
#include "tipo_elemento.h"

using namespace std; 

class Persona : public tipo_elemento{
	
	protected: 
	int indice; 
	Persona* next; 
	
	
	public:
		Persona();
		int GETindice(); 
		Persona* GETnext();
		void SETindice(int );
		void SETnext(Persona* );
		string toString();
		~Persona();
	
};

#endif