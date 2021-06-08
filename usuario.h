#ifndef USUARIO_H
#define USUARIO_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
#include<stdlib.h>
#include "plataforma.h"
using namespace std;

/* 
 * Título: usuario.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 03/06/2021 (Avance 4)
 *
 * Descripción:
 * Clase Usuario que contiene los métodos genéricos
 * para el manejo de usuarios en la plataforma o tienda virtual.
 * Esta clase tiene 2 clases hijas especializadas en:
 * Administrador y Cliente
*/

// Declaración de Clase: Usuario [Abstracta]
class Usuario{
	// Variables de instancia
	protected:
		string username, nombre, apellidos, email;
		int id;
		
	// Métodos miembros de la clase
	public:
		//Constructor default y parametrizado [Sobrecarga]
		Usuario();
		Usuario(string u, string n, string a, string e);
		string getUsername();
		string getNombre();
		string getApellidos();
		string getEmail();
		int getId();
		void visitaPlataforma(Plataforma p);
		void visualizaVideojuego(Plataforma p, string titulo);
		
		// Métodos abstractos [Sobreescritura]
		virtual void printUsuario() = 0;
		virtual void modificaVideojuego(Plataforma p, string vnombre, float nprecio) = 0;
		virtual void compraVideojuego(Plataforma p, string vnombre) = 0;
		virtual void muestraBiblioteca() = 0;
};

/* 
 * Constructor por default
 *
 * @param 
 * @return Objeto Usuario 
*/
Usuario::Usuario(){
	username = " ";
	nombre = " ";
	apellidos = " ";
	email = " ";
	id = 0;
}

/* 
 * Constructor parametrizado
 *
 * @param string u: username, string n: nombre del usuario,
 * string a: apellidos del usuario, string e: email del usuario
 * @return Objeto Usuario 
*/
Usuario::Usuario(string u, string n, string a, string e){
	username = u;
	nombre = n;
	apellidos = a;
	email = e;
	id = 500 + rand()% (1501-500); // Número aleatorio (Cruz, 2012)
}

/* 
 * getter username
 *
 * @param 
 * @return string: username 
*/
string Usuario::getUsername(){
	return username;
}

/* 
 * getter nombre
 *
 * @param 
 * @return string: nombre del usuario 
*/
string Usuario::getNombre(){
	return nombre;
}

/* 
 * getter apellidos
 *
 * @param 
 * @return string: apellidos del usuario
*/
string Usuario::getApellidos(){
	return apellidos;
}

/* 
 * getter email
 *
 * @param 
 * @return string: email del usuario
*/
string Usuario::getEmail(){
	return email;
}

/* 
 * getter id
 *
 * @param 
 * @return int: identificación del usuario
*/
int Usuario::getId(){
	return id;
}

/* 
 * visitaPlataforma permite al usuario al acceder a la plataforma
 * y ver los videojuegos en de dicho objeto.
 *
 * @param Plataforma p: plataforma donde se encuentran los videojuegos
 * @return
*/
void Usuario::visitaPlataforma(Plataforma p){
	p.muestraVideojuegos();	
}

/* 
 * visualizaVideojuego permite al usuario al acceder a la plataforma
 * y buscar un videojuego específico en ésta
 *
 * @param Plataforma p: plataforma donde se encuentran los videojuegos
 * string titulo: titulo de videojuego a buscar en la plataforma
 * @return
*/
void Usuario::visualizaVideojuego(Plataforma p, string titulo){
	p.buscaVideojuego(titulo);
}

#endif // USUARIO_H

/*
 * Referencias.
 * 		Cruz, M. (2012). Obtener numeros aleatorios en C++ (rand, srand).
 *		Recuperado de: https://blog.martincruz.me/2012/09/obtener-numeros-aleatorios-en-c-rand.html
*/