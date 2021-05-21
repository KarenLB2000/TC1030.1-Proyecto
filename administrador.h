#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

// Ficheros
#include <iostream>
#include "usuario.h"
#include <string>
#include <sstream>
using namespace std;

/* 
 * Título: administrador.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 19/05/2021 (Avance 2)
*/

/* 
 * Descripción:
 * Clase Administrador que es clase hija de Usuario.
 * Captura parcialmente comportmaiento y atributos
 * de un administrador a cargo de la gestión de la plataforma.
*/

// Declaración de Clase: Administrador
class Administrador: public Usuario{
	// Declaración de atributos (características)
	private:
		string cargo;
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor default y parametrizado [Sobrecarga - Overload]
		
		/* 
		* Constructor por default
		* @param 
		* @return Objeto Administrador 
		*/
		Administrador(): Usuario(){
			username = " ";
			nombre = " ";
			apellidos = " ";
			email = " ";
			cargo = " ";
			id = 0;			
		}

		/* 
		* Constructor parametrizado
		* @param string u: username, string n: nombre,
		* string a: apellidos, string e: email, 
		* string cargo: cargo del administrador
		* @return Objeto Administrador 
		*/
		Administrador(string u, string n, string a, string e, string c): Usuario(u, n, a, e){
			cargo = c;
		}
		
		// Métodos miembros de la clase	
		string getCargo();
		void setCargo(string nwc);
		void gestionaPlataforma();
		
		// [Sobreescritura - Override]
		string printUsuario();
};

/* 
 * getter cargo
 * @param 
 * @return string: cargo del administrador
*/
string Administrador::getCargo(){
	return cargo;
}

/* 
 * setter cargo
 * @param string: cargo del administrador 
 * @return
*/
void Administrador::setCargo(string nwc){
	cargo = nwc;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos del Usuario [Administrador]
*/
string Administrador::printUsuario(){
	stringstream nm;
	nm << "Username: " << username << "\n" << "Nombre: " << nombre << " " << apellidos << "\n";
	nm << "Email: " << email << "\n" << "Cargo: " << cargo << "\n" << "Id: " << id << "\n";
	return nm.str();
}

/* 
 * Permite al usuario administrador gestionar la plataforma o tienda virtual [En construcción]
 * @param 
 * @return
*/
void Administrador::gestionaPlataforma(){
	cout << "[Metodo en construccion] \nEl objetivo es que el administrador lleve a cabo\n";
	cout << "funciones como realizar altas y bajas de productos asi como su edicion.\n\n";
}

#endif // ADMINISTRADOR_H