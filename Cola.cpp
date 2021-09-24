#include "Cola.h"
#include <iostream>
#include <string>

using namespace std; 

Cola::Cola(){
	primero = NULL;
}

Persona* Cola :: GETprimero(){
	return primero;
}

void Cola :: SETprimero(Persona* x){
	primero = x;
}

void Cola :: ANULAR(){
	primero = NULL;
}

Persona* Cola :: FRENTE(){
	return GETprimero(); 
}

void Cola :: PONE(Persona* nodo){
	if (primero == NULL){
		primero = nodo;
	}else {
		Persona* nodosiguiente = primero; 
		while (nodosiguiente->GETnext() != NULL){
			nodosiguiente = nodosiguiente->GETnext(); 	
		}
		nodo->SETindice(nodosiguiente->GETindice() + 1);
		nodosiguiente->SETsiguiente(nodo); 
	}
}

void Cola :: QUITA(){
		Persona* nodosiguiente = primero->GETnext(); 
		int contar = 0; 
		while (nodosiguiente->GETnext() != NULL){
			nodosiguiente->SETindice(contar);
			contar++;
			nodosiguiente = nodosiguiente->GETnext(); 	
		}
		primero = nodosiguiente;
}

bool Cola :: VACIA(){
	bool v = false; 
	if (primero == NULL){
		v = true; 
	}else {
		v = false; 
	}
	return v; 
}


Cola::~Cola(){
	delete primero; 
}