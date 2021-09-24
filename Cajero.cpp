#include "Cajero.h"
#include "Cola.h"
#include <iostream>
#include <string>
#include "Persona.h"

Cajero::Cajero(){
	pila = NULL; 
}

Lista* Cajero :: GETpila(){
	return pila;
}

void Cajero :: SETpila(Lista* x){
	pila = x;
}

int Cajero :: GETnumcajero(){
	return numcajero;
}

void Cajero :: SETnumcajero(int x){
	numcajero = x;
}

string Cajero :: toString(){
	return "Este es el cajero numero: "+to_string(numcajero);
}

Cajero::~Cajero(){

}