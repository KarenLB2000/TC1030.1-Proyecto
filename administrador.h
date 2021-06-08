#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
#include "usuario.h"
#include "plataforma.h"
#include "videojuego.h"
using namespace std;

/* 
 * Título: administrador.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 08/06/2021 (Avance Final)
 *
 * Descripción:
 * Clase Administrador que es clase hija de Usuario.
 * Captura parcialmente comportmaiento y atributos
 * de un administrador a cargo de la gestión de la plataforma.
*/

// Declaración de Clase: Administrador [Hija de Usuario]
class Administrador: public Usuario{
	// Variables de instancia
	private:
		string cargo;
		
	// Métodos miembros de la clase
	public:
		/* 
		* Constructor por default
		*
		* @param 
		* @return Objeto Administrador 
		*/
		Administrador():Usuario(){
			cargo = " ";			
		}

		/* 
		* Constructor parametrizado
		*
		* @param string u: username, string n: nombre,
		* string a: apellidos, string e: email, 
		* string cargo: cargo del administrador
		* @return Objeto Administrador 
		*/
		Administrador(string u, string n, string a, string e, string c): Usuario(u, n, a, e){
			cargo = c;
		}
		
		string getCargo();
		void printUsuario();
		void modificaVideojuego(Plataforma *p, string titulo, float nprecio);

		/* 
		* Se agregan los siguiente métodos a fin de evitar un error de
		* compilación, pues si no sobreescribimos la función virtual 
		* pura en la clase derivada, la clase derivada también se convierte
		* en clase abstracta. (tutorialspoint.dev, 2019)
		*/
		void compraVideojuego(Plataforma p, string titulo){cout << "EN CONSTRUCCION.\n";}	
		void muestraBiblioteca(){cout << "EN CONSTRUCCION.\n";}
};

/* 
 * getter cargo
 *
 * @param 
 * @return string: cargo del administrador
*/
string Administrador::getCargo(){
	return cargo;
}

/* 
 * printUsuario imrpime los atributos del Usuario [Administrador]
 *
 * @param 
 * @return
*/
void Administrador::printUsuario(){
	cout << "Username: " << username << endl; 
	cout << "Nombre: " << nombre << " " << apellidos << endl;
	cout << "Email: " << email << endl;
	cout << "Id: " << id << endl;
	cout << "Cargo: " << cargo << endl;
}

/* 
 * modificaVideojuego permite al administrador modificar
 * el precio de un videojuego en el catálogo de la plataforma
 *
 * @param Plataforma p: plataforma donde se encuentran los videojuegos,
 * string titulo: título del videojuego a modificar, 
 * float nprecio: nuevo precio del videojuego
 * @return
*/
void Administrador::modificaVideojuego(Plataforma *p, string titulo, float nprecio){
	p -> accedeVideojuego(titulo, nprecio);
}	

#endif // ADMINISTRADOR_H

/*
 * Referencias.
 * 		tutorialspoint.dev (2019). Pure Virtual Functions and Abstract Classes in C++.
 *		Recuperado de: https://tutorialspoint.dev/language/cpp/pure-virtual-functions-and-abstract-classes
*/