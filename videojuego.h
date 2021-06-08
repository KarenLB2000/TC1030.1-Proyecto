#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/* 
 * Título: videojuego.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 08/06/2021 (Avance Final)
 *
 * Descripción:
 * Clase Videojuego, que captura parcialmente comportmaiento 
 * y atributos de un videojuego disponible en la plataforma.
*/

// Declaración de Clase: Videojuego
class Videojuego{
	// Variables de instancia
	private:
		string titulo, genero, descripcion;
		float precio;
		
	// Métodos miembros de la clase
	public:
		//Constructor default y parametrizado [Sobrecarga - Overload]
		Videojuego();
		Videojuego(string n, string d, string g, float p);

		string getTitulo();
		string getGenero();
		float getPrecio();
		void setPrecio(float np);
		string printVideojuego(); 
};

/* 
 * Constructor por default
 *
 * @param 
 * @return Objeto Videojuego 
*/
Videojuego::Videojuego(){
	titulo = " ";
	genero = " ";
	descripcion = " ";
	precio = 0;
}

/* 
 * Constructor parametrizado
 *
 * @param string t: título del videojuego, string g: género del videojuego,
 * stringstream d: descripción del videojuego, float p: precio del videojuego
 * @return Objeto Videojuego 
*/
Videojuego::Videojuego(string t, string d, string g, float p){
	titulo = t;
	genero = g;
	descripcion = d;
	precio = p;
}

/* 
 * getter nombre
 *
 * @param 
 * @return string: nombre del videojuego
*/
string Videojuego::getTitulo(){
	return titulo;
}

/* 
 * getter genero
 *
 * @param 
 * @return string: género del videojuego
*/
string Videojuego::getGenero(){
	return genero;
}

/* 
 * getter precio
 *
 * @param 
 * @return string: precio del videojuego
*/
float Videojuego::getPrecio(){
	return precio;
}

/* 
 * setter precio
 *
 * @param float np: nuevo precio del videojuego
 * @return
*/
void Videojuego::setPrecio(float np){
	precio = np;
}

/* 
 * printVideojuego imprime los atributos del Videojuego
 *
 * @param 
 * @return
*/
string Videojuego::printVideojuego(){
	stringstream aux;
	aux << "Titulo: " << titulo;
	aux << "\nGenero: " << genero;
	aux << "\nPrecio: $" << precio;
	aux << "\nDescripción: " << descripcion;
	return aux.str();
}

#endif // VIDEOJUEGO_H