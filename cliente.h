#ifndef CLIENTE_H
#define CLIENTE_H

// Ficheros
#include <iostream>
#include "usuario.h"
#include <string>
#include <sstream>
using namespace std;

/* 
 * Título: cliente.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 19/05/2021
*/

/* 
 * Descripción:
 * Clase Cliente que es clase hija de Usuario.
 * Captura parcialmente comportmaiento y atributos
 * de un cliente que visita y compra productos de la plataforma.
*/

// Declaración de Clase: Cliente
class Cliente: public Usuario{
	// Declaración de atributos (características)
	private:
		int num_tarjeta;
		float dinero;
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor default y parametrizado [Sobrecarga - Overload]
		
		/* 
		 * Constructor por default
		 * @param 
		 * @return Objeto Cliente 
		*/
		Cliente():Usuario(){
			username = " ";
			nombre = " ";
			apellidos = " ";
			email = " ";
			num_tarjeta = 0;
			dinero = 0;
			id = 0;			
		}

		/* 
		 * Constructor parametrizado
		 * @param string u: username, string n: nombre,
		 * string a: apellidos, string e: email, 
		 * int: número de tarjeta del cliente
		 * float: dinero en la tarjeta del cliente
		 * @return Objeto Cliente 
		*/
		Cliente(string u, string n, string a, string e, int nt, float d): Usuario(u, n, a, e){
			num_tarjeta = nt;
			dinero = d;
		}
		
		// Métodos miembros de la clase	
		int getNumTarjeta();
		float getDinero();
		
		void setNumTarjeta(int nwt);
		void setDinero(float nwd);
		
		void compraVideojuego();
		
		// [Sobreescritura - Override]
		string printUsuario();
};

/* 
 * getter num_tarjeta
 * @param 
 * @return int: número de tarjera del cliente
*/
int Cliente::getNumTarjeta(){
	return num_tarjeta;
}

/* 
 * getter dinero
 * @param 
 * @return float: dinero en la tarjeta del cliente
*/
float Cliente::getDinero(){
	return dinero;
}

/* 
 * setter num_tarjeta
 * @param int: número de tarjera del cliente 
 * @return
*/
void Cliente::setNumTarjeta(int nwt){
	num_tarjeta = nwt;
}

/* 
 * setter dinero
 * @param float: dinero en la tarjeta del cliente 
 * @return
*/
void Cliente::setDinero(float nwd){
	dinero = nwd;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos del Usuario [Cliente]
*/
string Cliente::printUsuario(){
	stringstream nm;
	nm << "Username: " << username << "\n" << "Nombre: " << nombre << " " << apellidos << "\n";
	nm << "Email: " << email << "\n" << "Saldo disponible: $" << dinero << "\n" << "Id: " << id << "\n";
	return nm.str();
}

/* 
 * Permite al usuario cliente comprar productos la plataforma o tienda virtual [En construcción]
 * @param 
 * @return
*/
void Cliente::compraVideojuego(){
	cout << "[Metodo en construccion] \nEl objetivo es que el cliente sea capaz de\n";
	cout << "finalizar la compra de un prodcuto,\nvisualizando los detalles de la compra antes de consumarse.\n\n";
}

#endif // CLIENTE_H