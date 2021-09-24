#ifndef TIPO_ELEMENTO_H
#define TIPO_ELEMENTO_H
#include <string>
#include <iostream>
using namespace std;

class tipo_elemento{ //CLase designada a representar los elementos de la lista
	
	protected: 
	int contenido; 
	int index;
	string descripcion = "";
	tipo_elemento* siguiente; 
	
	public:
		
		tipo_elemento();
		string GETdescripcion();
		void SETdescripcion(string );
		int GETcontenido();
		int GETindex();
		void SETindex(int );
		void SETcontenido(int );
		tipo_elemento(int );
		void SETsiguiente(tipo_elemento* );
		tipo_elemento* GETsiguiente();
		string toString();
		~tipo_elemento();
	
};

#endif