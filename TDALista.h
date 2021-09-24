#ifndef TDALISTA_H
#define TDALISTA_H
#include <string>
#include <cstring>
#include "tipo_elemento.h"

using namespace std; 

class TDALista{  //Clase del TDA de Lista aplicado a lenguaje de programacion sin alteraciones (METODOS INTACTOS)
	
	protected: 
	int nElementos;  
	
	public:
		//Metodos autosuficientes, no necesitan atributos de la clase para funcionar
		//informacion necesaria mediante parametros 
		TDALista();
		virtual bool INSERTAR(int, tipo_elemento, TDALista* ) = 0;
		virtual tipo_elemento* SUPRIMIR(int, TDALista* ) = 0;
		virtual void ANULAR(TDALista* ) = 0;
		virtual int LOCALIZAR(tipo_elemento*, TDALista* ) = 0;
		virtual tipo_elemento* SIGUIENTE(int, TDALista* ) = 0;
		virtual tipo_elemento* ANTERIOR(int, TDALista* ) = 0;
		virtual tipo_elemento* RECUPERA(int, TDALista* ) =0;
		virtual void IMPRIMIR(TDALista* ) = 0;
		virtual tipo_elemento* PRIMERO(TDALista* ) = 0;
		virtual bool VACIA(TDALista* ) = 0;
		virtual int FIN(TDALista* ) = 0;
		~TDALista();
};

#endif