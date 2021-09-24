#include "Lista.h"
#include "tipo_elemento.h"
#include <iostream>

using namespace std; 

Lista::Lista(){
	inicio = NULL;
}

void Lista :: INSERTAR(int indice, tipo_elemento* nodo){
	if (inicio == NULL){
		inicio = nodo;
	}else {
		bool v = false; 
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			if (nodosiguiente->GETsiguiente()->GETindex() == indice){
				v = true; 
				break; 
			}else {
				nodosiguiente = nodosiguiente->GETsiguiente(); 	
			}
		}
		if (v == true){
			nodo->SETsiguiente(nodosiguiente->GETsiguiente());
			nodosiguiente->SETsiguiente(nodo); 
		}
	}
	
}

void Lista :: INSERTAR(tipo_elemento* nodo){
	if (inicio == NULL){
		inicio = nodo;
	}else {
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			nodosiguiente = nodosiguiente->GETsiguiente(); 
			
		}
		nodosiguiente->SETsiguiente(nodo);
	}
	
}

void Lista :: SUPRIMIR(int indice){
	if (inicio == NULL){
		cout << "No se puede suprimir ese elemento de la lista debido a que esta vacia. " <<endl;
	}else {
		bool v = false;
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			if (nodosiguiente->GETsiguiente()->GETindex() == indice){
				v = true; 
				break; 
			}else {
				nodosiguiente = nodosiguiente->GETsiguiente(); 	
			}
		}
		if (v == true){
			tipo_elemento* nuevo = nodosiguiente->GETsiguiente()->GETsiguiente();
			nodosiguiente->SETsiguiente(nuevo); 
		}
		int contador = 0; 
		tipo_elemento* nodosnuevos = inicio; 
		while (nodosnuevos->GETsiguiente() != NULL){
			nodosnuevos->SETindex(contador);
			contador++;
			nodosnuevos = nodosnuevos->GETsiguiente();
		}
		nodosnuevos->SETindex(contador);
	}
}

void Lista :: ANULAR(){
	inicio = NULL;
}

int Lista :: LOCALIZAR(tipo_elemento* nodobuscar){
	int retorno;
	if (inicio == NULL){
		cout << "No se puede buscar ese elemento de la lista debido a que esta vacia. " <<endl;
	}else {
		bool v = false;
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			if (nodosiguiente->GETsiguiente() == nodobuscar){
				v = true; 
				break; 
			}else {
				nodosiguiente = nodosiguiente->GETsiguiente(); 	
			}
		}
		if (v == true){
			retorno = nodosiguiente->GETsiguiente()->GETindex();
		}
	} 
	return retorno;
}

int Lista :: SIGUIENTE(int pos){
	int retorno;
	if (inicio == NULL){
		cout << "No se puede buscar esa posicion de la lista debido a que esta vacia. " <<endl;
	}else {
		bool v = false;
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			if (nodosiguiente->GETsiguiente()->GETindex() == pos){
				v = true; 
				break; 
			}else {
				nodosiguiente = nodosiguiente->GETsiguiente(); 	
			}
		}
		if (v == true){
			retorno = nodosiguiente->GETsiguiente()->GETsiguiente()->GETindex();
		}
	} 
	return retorno;
}

int Lista :: ANTERIOR(int pos){
	int retorno;
	if (inicio == NULL){
		cout << "No se puede buscar esa posicion de la lista debido a que esta vacia. " <<endl;
	}else {
		bool v = false;
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			if (nodosiguiente->GETsiguiente()->GETindex() == pos){
				v = true; 
				break; 
			}else {
				nodosiguiente = nodosiguiente->GETsiguiente(); 	
			}
		}
		if (v == true){
			retorno = nodosiguiente->GETindex();
		}
	} 
	return retorno;
}

tipo_elemento* Lista :: RECUPERA(int pos){
	tipo_elemento* retorno; 
	if (inicio == NULL){
		cout << "No se puede buscar esa posicion de la lista debido a que esta vacia. " <<endl;
	}else {
		bool v = false;
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			if (nodosiguiente->GETindex() == pos){
				v = true; 
				break; 
			}else {
				nodosiguiente = nodosiguiente->GETsiguiente(); 	
			}
		}
		if (v == true){
			retorno = nodosiguiente;
		}
	} 
	return retorno;
}

void Lista :: IMPRIMIR(){
	if (inicio == NULL){
		cout << "No se puede imprimir la lista debido a que esta vacia. " <<endl;
	}else {
		tipo_elemento* nodosiguiente = inicio; 
		cout << "Lista: " <<endl;
		while (nodosiguiente->GETsiguiente() != NULL){
			cout << nodosiguiente->toString() << endl;
			nodosiguiente = nodosiguiente->GETsiguiente();
		}
		cout << nodosiguiente->toString() <<endl;
	} 
} 

tipo_elemento* Lista :: PRIMERO(){
	return inicio; 
}

int Lista :: FIN(){
	int retorno; 
	if (inicio == NULL){
		cout << "No se puede imprimir la lista debido a que esta vacia. " <<endl;
	}else {
		bool v = false;
		tipo_elemento* nodosiguiente = inicio; 
		while (nodosiguiente->GETsiguiente() != NULL){
			nodosiguiente = nodosiguiente->GETsiguiente();
		}
		retorno = nodosiguiente->GETindex();
	} 
	return retorno;
}

Lista::~Lista(){

}
