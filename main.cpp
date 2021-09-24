#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
#include <math.h>
#include <cmath>
#include <vector>
#include <unistd.h>
#include <stdlib.h>
#include "Persona.h"
#include "Cola.h"
#include "tipo_elemento.h"
#include "Cajero.h"
using namespace std; 

int menu();

int obtenerminutos();

bool personadentro(Persona* &, Cajero* &);

int main(int argc, char** argv) {
	Cajero* cajero1 = new Cajero(); 
	cajero1->SETnumcajero(1);
	Cajero* cajero2= new Cajero();
	cajero2->SETnumcajero(2);
	Cajero* cajero3= new Cajero();
	cajero3->SETnumcajero(3);
	Cajero* cajero4= new Cajero();
	cajero4->SETnumcajero(4);
	int opcion = menu();
	while (opcion != 3){
		switch (opcion){
			case 1:
				{
				cout << "-------SIMULACION DE UNA COLA------" <<endl; 
				Persona* persona = new Persona();
				persona->SETindice(0);
				Cola* cola = new Cola();
				cola->SETprimero(persona);
				auto start = std::chrono::system_clock::now();  
				time_t end_time = chrono::system_clock::to_time_t(start); 
				string n = "";
				n = std::ctime(&end_time);
				int contar = 0;
				string inicio = "";
				for (char c : n){
					int ascii = c; 
					if (ascii == 58){
						contar++;
					}else if (contar == 1){
						inicio += c;
					}
				}
				int minutosiniciales = atoi(inicio.c_str());
				int minutosfinales = 0;
				while (minutosfinales != minutosiniciales + 2){
					Persona* p = new Persona();
					cola->PONE(p);
					thread th(personadentro, ref(p), ref(cajero1));
					//if(th.joinable()) {
        				th.detach();
    				//}
    				/*
					Persona* p2 = new Persona();
					cola->PONE(p2);
					thread th2(personadentro, p2, cajero2);
					if(th2.joinable()) {
        				th2.join();
    				}
					Persona* p3 = new Persona();
					cola->PONE(p3);
					thread th3(personadentro, p3, cajero3);
					if(th3.joinable()) {
        				th3.join();
    				}
					Persona* p4 = new Persona();
					cola->PONE(p4);
					thread th4(personadentro, p4, cajero4);
					if(th4.joinable()) {
        				th4.join();
    				}
    				*/
					minutosfinales = obtenerminutos();
				}
				cout << n;
				cout << "-------FINAL SIMULACION DE UNA COLA------" <<endl; 
				break; 
				}
			case 2:
				{
				cout << "-------SIMULACION DE MULTIPLE COLA------" <<endl; 
				
				cout << "-------FINAL SIMULACION DE MULTIPLE COLA------" <<endl; 
				break; 
				}
		}//Fin del switch.
		cout <<endl; 
		opcion = menu(); 
	}//Fin del while. 
	
	return 0;
}

bool personadentro(Persona* &p, Cajero* &caja){
	int num = 1 + rand() % (2);
	if (num == 1){
		tipo_elemento* elem = new tipo_elemento();
		elem->SETdescripcion("Deposito");
		Lista* li = caja->GETpila();
		li->INSERTAR(elem);
		caja->SETpila(li);
		this_thread::sleep_for(chrono::milliseconds(1000));
	}else if (num == 2){
		tipo_elemento* elem = new tipo_elemento();
		elem->SETdescripcion("Retiro");
		Lista* li = caja->GETpila();
		li->INSERTAR(elem);
		caja->SETpila(li);
		this_thread::sleep_for(chrono::milliseconds(2000));
	}else if (num == 3){
		tipo_elemento* elem = new tipo_elemento();
		elem->SETdescripcion("Pago");
		Lista* li = caja->GETpila();
		li->INSERTAR(elem);
		caja->SETpila(li);
		this_thread::sleep_for(chrono::milliseconds(3000));
	}
	return true; 
}

int obtenerminutos(){
	auto start = std::chrono::system_clock::now();  
				time_t end_time = chrono::system_clock::to_time_t(start); 
				string n = "";
				n = std::ctime(&end_time);
				int contar = 0;
				string inicio = "";
				for (char c : n){
					int ascii = c; 
					if (ascii == 58){
						contar++;
					}else if (contar == 1){
						inicio += c;
					}
				}
				int minutosiniciales = atoi(inicio.c_str());
		return minutosiniciales;
}

int menu(){
	int opcion = 0; 
	while (opcion != 3){
		cout << "--------MENU DE SIMULACIONES--------" <<endl;
		cout << " 1) 4 cajeros con una cola. "<<endl;
		cout << " 2) 4 cajeros con 4 colas. " <<endl; 
		cout << " 3) Salir. " <<endl; 
		cout << "---------------------" <<endl; 
		cout << " Ingrese la opcion: " <<endl; 
		cin>> opcion; 
		if (opcion == 3){
			cout << "Ha elegido salir del sistema. " <<endl; 
		}else if (opcion > 0 && opcion < 3){
			break; 
		}
	}
	return opcion; 
}



