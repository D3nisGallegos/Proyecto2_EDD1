#include "tipo_elemento.h"
#include <iostream>
using namespace std; 

tipo_elemento::tipo_elemento(){
	siguiente = NULL;
}

tipo_elemento::tipo_elemento(int cont){
	contenido = cont; 
	siguiente = NULL;
}

string tipo_elemento :: GETdescripcion(){
	return descripcion;
}

void tipo_elemento :: SETdescripcion(string x){
	descripcion = x;
}

int tipo_elemento :: GETindex(){
	return index; 
}

int tipo_elemento :: GETcontenido(){
	return contenido;
}

void tipo_elemento :: SETindex(int indice){
	index = indice; 
}

void tipo_elemento :: SETcontenido(int cont ){
	contenido = cont; 
}

void tipo_elemento :: SETsiguiente(tipo_elemento* nodonuevo){
	siguiente = nodonuevo;
}

tipo_elemento* tipo_elemento :: GETsiguiente(){
	return siguiente; 
}

string tipo_elemento :: toString(){
	return "Nodo con el indice: "+to_string(index)+" con el contenido: "+to_string(contenido);
}

tipo_elemento::~tipo_elemento(){

}
