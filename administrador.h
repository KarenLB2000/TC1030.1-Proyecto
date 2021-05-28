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
 * 25/05/2021 (Avance 3)
*/

/* 
 * Descripción:
 * Clase Administrador que es clase hija de Usuario.
 * Captura parcialmente comportmaiento y atributos
 * de un administrador a cargo de la gestión de la plataforma.
*/

// Declaración de Clase: Administrador
class Administrador: public Usuario{
	// Atributos (características)
	private:
		string cargo;
		
	// Métodos (comportamientos)
	public:
		/* 
		* Constructor por default
		* @param 
		* @return Objeto Administrador 
		*/
		Administrador():Usuario(){
			cargo = " ";			
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
		
		void modificaVideojuego(Plataforma p, string vnombre, float nprecio);
		// void monitoreaUsuarios(Plataforma p);
		
		// [Sobreescritura - Override]
		void printUsuario(); 
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
 * Imprime los Datos del Usuario [Administrador]
 * @param 
 * @return
*/
void Administrador::printUsuario(){
	Usuario::printUsuario();
	cout << "Cargo: " << cargo << "\n\n";
}

/* 
 * Permite al administrador modificar el precio de un videojuego 
 * en el catálogo de la plataforma
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

/* 
 * Permite al administrador monitorear los usuarios registrados
 * en la plataforma
 * @param Plataforma p: plataforma donde se encuentran los videojuegos
 * @return
*/

/* void Administrador::monitoreaUsuarios(Plataforma p){
	p.muestraUsuarios();
} */

#endif // ADMINISTRADOR_H