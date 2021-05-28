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
 * 25/05/2021 (Avance 3)
*/

/* 
 * Descripción:
 * Clase Cliente que es clase hija de Usuario.
 * Captura parcialmente comportmaiento y atributos
 * de un cliente que visita y compra productos de la plataforma.
*/

// Declaración de Clase: Cliente
class Cliente: public Usuario{
	// Atributos (características)
	private:
		float dinero;
		Videojuego biblioteca[100];
		int ib;
		
	// Métodos (comportamientos)
	public:
		/* 
		 * Constructor por default
		 * @param 
		 * @return Objeto Cliente 
		*/
		Cliente():Usuario(){
			dinero = 0;	
			ib = 0;
		}

		/* 
		 * Constructor parametrizado
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
		
		// Métodos miembros de la clase	
		float getDinero();
		int getIb();
		
		void compraVideojuego(Plataforma p, string vnombre);
		void muestraBiblioteca();
		
		// [Sobreescritura - Override]
		void printUsuario();
};

/* 
 * getter dinero
 * @param 
 * @return float: dinero en la tarjeta del cliente
*/
float Cliente::getDinero(){
	return dinero;
}

/* 
 * getter ib
 * @param 
 * @return int: número de videojuegos en la biblioteca del cliente
*/
int Cliente::getIb(){
	return ib;
}

/* 
 * Permite al cliente comprar algún videojuego de la plataforma
 * @param Plataforma p: plataforma donde se encuentran los videojuegos,
 * string vnombre: nombre del videojuego a comprar por el cliente,
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
 * Permite al cliente ver los videojuegos en su biblioteca
 * @param 
 * @return
*/
void Cliente::muestraBiblioteca(){
	for (int i = 0; i < ib; i++)
		biblioteca[i].printVideojuego(); 
}

/* 
 * Imprime los Datos del Usuario [Cliente]
 * @param 
 * @return
*/
void Cliente::printUsuario(){
	Usuario::printUsuario();
	cout << "Saldo disponible: $" << dinero << "\n\n";
}

#endif // CLIENTE_H