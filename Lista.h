
#define LISTA_H
#include "TDALista.h"

using namespace std; 

class Lista { //Clase de TDA de lista junto con practicas de programacion (metodos modificados)
	
	protected:
	tipo_elemento* inicio;
	
	public:
		//Metodos modificados en los parametris utilizando practicas de programacion
		//informacion obtenida de la propia clase implicitamente, los metodos son las operaciones de la lista
		Lista();
		void INSERTAR(int, tipo_elemento* );
		void INSERTAR(tipo_elemento* );
		void SUPRIMIR(int); 
		void ANULAR();
		int LOCALIZAR(tipo_elemento*);
		int SIGUIENTE(int);
		int ANTERIOR(int);
		tipo_elemento* RECUPERA(int);
		void IMPRIMIR();
	 	tipo_elemento* PRIMERO();
		int FIN();
		~Lista();
};
