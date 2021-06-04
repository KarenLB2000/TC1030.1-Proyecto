#ifndef CLIENTE_H
#define CLIENTE_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
#include "usuario.h"
#include "plataforma.h"
using namespace std;

/* 
 * Título: cliente.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 03/06/2021 (Avance 4)
 *
 * Descripción:
 * Clase Cliente que es clase hija de Usuario.
 * Captura parcialmente comportmaiento y atributos
 * de un cliente que visita y compra productos de la plataforma.
*/

// Declaración de Clase: Cliente [Hija de Usuario]
class Cliente: public Usuario{
	// Variables de instancia
	private:
		float dinero;
		Videojuego biblioteca[100];
		int ib;
		
	// Métodos miembros de la clase
	public:
		/* 
		 * Constructor por default
		 *
		 * @param 
		 * @return Objeto Cliente 
		*/
		Cliente():Usuario(){
			dinero = 0;	
			ib = 0;
		}

		/* 
		 * Constructor parametrizado
		 *
		 * @param string u: username, string n: nombre,
		 * string a: apellidos, string e: email, 
		 * int: número de tarjeta del cliente
		 * float: dinero en la tarjeta del cliente
		 * @return Objeto Cliente 
		*/
		Cliente(string u, string n, string a, string e, float d): Usuario(u, n, a, e){
			dinero = d;
			ib = 0;
		}
		
		float getDinero();
		int getIb();
		void compraVideojuego(Plataforma p, string vnombre);
		void muestraBiblioteca();
		void printUsuario();
		
		/* 
		* Se agrega el siguiente método a fin de evitar un error de
		* compilación, pues si no sobreescribimos la función virtual 
		* pura en la clase derivada, la clase derivada también se convierte
		* en clase abstracta. (tutorialspoint.dev, 2019)
		*/
		void modificaVideojuego(Plataforma p, string vnombre, float nprecio);
};

/* 
 * getter dinero
 *
 * @param 
 * @return float: dinero en la tarjeta del cliente
*/
float Cliente::getDinero(){
	return dinero;
}

/* 
 * getter ib
 *
 * @param 
 * @return int: número de videojuegos en la biblioteca del cliente
*/
int Cliente::getIb(){
	return ib;
}

/* 
 * printUsuario imrpime los atributos del Usuario [Cliente]
 * @param 
 * @return
*/
void Cliente::printUsuario(){
	cout << "Username: " << username << endl; 
	cout << "Nombre: " << nombre << " " << apellidos << endl;
	cout << "Email: " << email << endl;
	cout << "Id: " << id << endl;
	cout << "Saldo disponible: $" << dinero << "\n\n";
}

/* 
 * compraVideojuego permite al cliente comprar algún 
 * videojuego de la plataforma y agregarlo a su biblioteca
 *
 * @param Plataforma p: plataforma donde se encuentran los videojuegos,
 * string vnombre: nombre del videojuego que el cliente está comprando,
 * @return
*/
void Cliente::compraVideojuego(Plataforma p, string vnombre){
	Videojuego z = p.buscaVideojuego(vnombre);
	dinero = dinero - z.getPrecio();
	biblioteca[ib] = z;
	ib++;
	cout << "DETALLES DE COMPRA." << endl;
	cout << "Username: " << username << "\tEmail: " << email << endl;
	cout << "Título" << z.getNombre() << "\tPrecio: $" << z.getPrecio() << endl;
	cout << "¡Pago exitoso!" << "\tSaldo tras la compra: $" << dinero << endl;
	cout << "Ahora puede encontrosr el videojuego en su biblioteca." << endl;
}

/* 
 * muestraBiblioteca permite al cliente ver los videojuegos en su biblioteca
 *
 * @param 
 * @return
*/
void Cliente::muestraBiblioteca(){
	if (ib == 0)
		cout << "Sin videojuegos por el momento." << endl;
	else{
		cout << "Biblioteca." << endl;
		for (int i = 0; i < ib; i++)
			biblioteca[i].printVideojuego();
	}
}

void Cliente::modificaVideojuego(Plataforma p, string vnombre, float nprecio){
	cout << "EN CONSTRUCCION." << endl;			
}	
	
#endif // CLIENTE_H

/*
 * Referencias.
 * 		tutorialspoint.dev (2019). Pure Virtual Functions and Abstract Classes in C++.
 *		Recuperado de: https://tutorialspoint.dev/language/cpp/pure-virtual-functions-and-abstract-classes
*/