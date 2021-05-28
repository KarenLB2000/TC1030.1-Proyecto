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
 * 25/05/2021 (Avance 3)
*/

/* 
 * Descripción:
 * Clase Usuario que contiene los métodos genéricos
 * para el manejo de usuarios en la plataforma o tienda virtual.
 * Esta clase tiene 2 clases hijas especializadas en:
 * Administrador y Cliente
*/

// Declaración de Clase: Usuario
class Usuario{
	// Atributos (características)
	protected:
		string username, nombre, apellidos, email;
		int id;
		
	// Métodos (comportamientos)
	public:
		//Constructor default y parametrizado [Sobrecarga - Overload]
		Usuario();
		Usuario(string u, string n, string a, string e);
		
		// Métodos miembros de la clase
		string getUsername();
		string getNombre();
		string getApellidos();
		string getEmail();
		int getId();

		void visitaPlataforma(Plataforma p);
		virtual void printUsuario();
		
		// Métodos en contrucción
		virtual void modificaVideojuego(Plataforma p, string vnombre, float nprecio);
		virtual void compraVideojuego(Plataforma p, string vnombre);
		virtual void muestraBiblioteca();
};

/* 
 * Constructor por default
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
 * @param string u: username o nombre del usuario, string n: nombre (real) del usuario,
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
 * @param 
 * @return string: nombre del usuario 
*/
string Usuario::getUsername(){
	return username;
}

/* 
 * getter nombre
 * @param 
 * @return string: nombre (real) del usuario 
*/
string Usuario::getNombre(){
	return nombre;
}

/* 
 * getter apellidos
 * @param 
 * @return string: apellidos del usuario
*/
string Usuario::getApellidos(){
	return apellidos;
}

/* 
 * getter email
 * @param 
 * @return string: email del usuario
*/
string Usuario::getEmail(){
	return email;
}

/* 
 * getter id
 * @param 
 * @return int: identificación del usuario
*/
int Usuario::getId(){
	return id;
}

/* 
 * Permite al usuario al acceder/ visitar la plataforma y
 * ver los videojuegos en ésta.
 * @param Plataforma p: plataforma donde se encuentran los videojuegos
 * @return
*/
void Usuario::visitaPlataforma(Plataforma p){
	p.muestraVideojuegos();	
}

/* 
 * Imrpime Datos del Usuario
 * @param 
 * @return
*/
void Usuario::printUsuario(){
	cout << "Username: " << username << endl; 
	cout << "Nombre: " << nombre << " " << apellidos << endl;
	cout << "Email: " << email << endl;
	cout << "Id: " << id << endl;
}

/* 
 * Método de Administrador. [En construcción]
 * @param 
 * @return
*/
void Usuario::modificaVideojuego(Plataforma p, string vnombre, float nprecio){
	cout << "[En construcción]" << endl;
}

/* 
 * Método de Cliente. [En construcción]
 * @param
 * @return
*/
void Usuario::compraVideojuego(Plataforma p, string vnombre){
	cout << "[En construcción]" << endl;	
}

/* 
 * Método de Cliente. [En construcción]
 * @param
 * @return
*/
void Usuario::muestraBiblioteca(){
	cout << "[En construcción]" << endl;	
}

#endif // USUARIO_H

/*
 * Referencias.
 * 		Cruz, M. (2012). Obtener numeros aleatorios en C++ (rand, srand).
 *		Recuperado de: https://blog.martincruz.me/2012/09/obtener-numeros-aleatorios-en-c-rand.html
*/