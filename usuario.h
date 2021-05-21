#ifndef USUARIO_H
#define USUARIO_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
#include<stdlib.h>
using namespace std;

/* 
 * Título: usuario.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 19/05/2021 (Avance 2)
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
	// Declaración de atributos (características)
	protected:
		string username, nombre, apellidos, email;
		int id;
		
	// Declaración de métodos (comportamientos)
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
		
		void setUsername(string nwu);
		void setEmail(string nwe);
		
		string printUsuario();
		void visitaPlataforma();
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
 * setter username
 * @param string: username o nombre del usuario 
 * @return
*/
void Usuario::setUsername(string nwu){
	username = nwu;
}

/* 
 * setter email
 * @param string: email del usuario 
 * @return
*/
void Usuario::setEmail(string nwe){
	email = nwe;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos del Usuario
*/
string Usuario::printUsuario(){
	stringstream nm;
	nm << "Username: " << username << "\n" << "Nombre: " << nombre << " " << apellidos << "\n";
	nm << "Email: " << email << "\n" << "Id: " << id << "\n";
	return nm.str();
}
	
/* 
 * Permite al usuario al acceder a la plataforma o tienda virtual [En construcción]
 * @param 
 * @return
*/
void Usuario::visitaPlataforma(){
	cout << "[Metodo en construccion] \nEl objetivo es que el usuario acceda a la plataforma,\n";
	cout << "siendo capaz de realizar una busqueda de un videojuego en\n";
	cout << "el catalogo y teniendo la opcion de visualizar\n";
	cout << "detalles del mismo.\n\n";
}

#endif // USUARIO_H

/*
 * Referencias.
 * 		Cruz, M. (2012). Obtener numeros aleatorios en C++ (rand, srand).
 *		Recuperado de: https://blog.martincruz.me/2012/09/obtener-numeros-aleatorios-en-c-rand.html
*/