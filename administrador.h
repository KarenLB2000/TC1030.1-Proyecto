#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
#include "usuario.h"
#include "plataforma.h"
using namespace std;

/* 
 * Título: administrador.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 03/06/2021 (Avance 4)
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
		void modificaVideojuego(Plataforma p, string vnombre, float nprecio);

		/* 
		* Se agregan los siguiente métodos a fin de evitar un error de
		* compilación, pues si no sobreescribimos la función virtual 
		* pura en la clase derivada, la clase derivada también se convierte
		* en clase abstracta. (tutorialspoint.dev, 2019)
		*/
		void compraVideojuego(Plataforma p, string vnombre);
		void muestraBiblioteca();
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
	Usuario::printUsuario();
	cout << "Cargo: " << cargo << "\n\n";
}

/* 
 * modificaVideojuego permite al administrador modificar
 * el precio de un videojuego en el catálogo de la plataforma
 *
 * @param Plataforma p: plataforma donde se encuentran los videojuegos,
 * string vnombre: nombre dle videojuego a modificar, 
 * float nprecio: nuevo precio del videojuego
 * @return
*/
void Administrador::modificaVideojuego(Plataforma p, string vnombre, float nprecio){
	Videojuego z = p.buscaVideojuego(vnombre);
	cout << "DETALLES DEL VIDEOJUEGO." << endl;
	z.printVideojuego();
	z.setPrecio(nprecio);
	cout << "DETALLES DEL VIDEOJUEGO [ACTUALIZADO]." << endl;
	z.printVideojuego();
}	
	
void Administrador::compraVideojuego(Plataforma p, string vnombre){
	cout << "EN CONSTRUCCION." << endl;
}

void Administrador::muestraBiblioteca(){
	cout << "EN CONSTRUCCION." << endl;			
}	

#endif // ADMINISTRADOR_H

/*
 * Referencias.
 * 		tutorialspoint.dev (2019). Pure Virtual Functions and Abstract Classes in C++.
 *		Recuperado de: https://tutorialspoint.dev/language/cpp/pure-virtual-functions-and-abstract-classes
*/