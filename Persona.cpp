#include "Persona.h"
#include <iostream>
#include <string> 

using namespace std; 

Persona::Persona(){
	next = NULL;
}

int Persona :: GETindice(){
	return indice;
}

void Persona :: SETindice(int x){
	indice = x;
}

Persona* Persona :: GETnext(){
	return next; 
}

void Persona :: SETnext(Persona* x){
	next = x;
}

string Persona :: toString(){
	return "Esta es una persona con el indice: "+to_string(indice);
}

Persona::~Persona()
{
}