#ifndef PLATAFORMA_H
#define PLATAFORMA_H

// Ficheros
#include <iostream>
#include <string>
#include <sstream>
#include<stdlib.h>
#include "videojuego.h"
using namespace std;

/* 
 * Título: plataforma.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 03/06/2021 (Avance 4)
 *
 * Descripción:
 * Clase Plataforma compuesta por Videojuegos y Usuarios: 
 * Admnistrador y Cliente. Representa una plataforma o tienda
 * de videojuegos digitales con funciones de búsqueda, compra
 * y gestión.
*/

// Declaración de Clase: Plataforma
class Plataforma{
	// Variables de instancia
	private:
		Videojuego videojuegos[100];
		int iv;
		
	// Métodos miembros de la clase
	public:
		//Constructor por default
		Plataforma();

		void creaEjemplos();
		void buscaVideojuego(string njuego);
		void accedeVideojuego(string ajuego, float nprecio);
		Videojuego accedeVideojuego(string ajuego);
		void muestraVideojuegos();
};

/* 
 * Constructor por default
 *
 * @param 
 * @return Objeto Hospital 
*/
Plataforma::Plataforma(){
	iv = 0;
	// iu = 0;
}

/* 
 * creaEjemplos() crea ejemplos de videojuegos
 *
 * @param 
 * @return
*/
void Plataforma::creaEjemplos(){
	string n = "Persona 5 Strikers";
	string g = "Aventura";
	string d = "Unete a los Ladrones Fantasma y arremete\ncontra la corrupcion de las ciudades de Japon.\n";
	float p = 779;
	Videojuego v0(n, d, g, p);
	videojuegos[0] = v0;
	
	n = "DOOM Eternal";
	g = "Accion";
	d = "Los ejercitos del infierno han invadido la Tierra.\nNo le tienen miedo a nada...salvo a ti.\n";
	p = 1399;
	Videojuego v1(n, d, g, p);
	videojuegos[1] = v1;
	
	n = "Subnautica Below Zero";
	g = "Simulacion";
	d = "Sumergete en una gelida aventura subacuatica en un planeta alienigena.\n";
	p = 279.99;
	Videojuego v2(n, d, g, p);
	videojuegos[2] = v2;
	
	n = "Carcassonne Tiles and Tactics";
	g = "Estrategia";
	d = "¡Adaptacion oficial del famoso juego de mesa Carcassonne!\n";
	p = 113.99;
	Videojuego v3(n, d, g, p);
	videojuegos[3] = v3;
	
	n = "WORLD OF FINAL FANTASY";
	g = "Rol";
	d = "Embarcate en un viaje magico con los hermanos Reynn y Lann \nmientras exploran las vastas tierras de Grymoire.\n";
	p = 393.99;
	Videojuego v4(n, d, g, p);
	videojuegos[4] = v4;
	
	n = "OMORI";
	g = "Rol";
	d = "Explore a strange world full of colorful friends and foes.\n";
	p = 185.99;
	Videojuego v5(n, d, g, p);
	videojuegos[5] = v5;
	
	iv = 6;
}

/* 
 * buscaVideojuego() permite al usuario buscar un 
 * videojuego específico a partir de ingresar el nombre
 * de éste, viendo entonces su descripción completa 
 * (información de sus atributos).
 *
 * @param string njuego: nombre de videojuego a buscar en la plataforma
 * @return  
*/
void Plataforma::buscaVideojuego(string njuego){
	for (int i = 0; i < iv; i++){
		if (njuego == videojuegos[i].getNombre())
			cout << videojuegos[i].printVideojuego();
	}
}

/* 
 * accedeVideojuego() permite al usuario [Administrador] acceder a un 
 * videojuego específico a partir de ingresar el nombre de éste.
 *
 * @param string ajuego: nombre de videojuego a acceder en la plataforma
 * @return  
*/
void Plataforma::accedeVideojuego(string ajuego, float nprecio){
	for (int i = 0; i < iv; i++){
		if (ajuego == videojuegos[i].getNombre()){		
			cout << "Nombre: " << videojuegos[i].getNombre();
			cout << "\tPrecio: $" << videojuegos[i].getPrecio();
			cout << "\t[PASADO]" << endl;			
			
			// Setters not working inside of a class method
			videojuegos[i].setPrecio(nprecio);
			
			cout << "Nombre: " << videojuegos[i].getNombre();
			cout << "\tPrecio: $" << videojuegos[i].getPrecio();
			cout << "\t[ACTUALIZADO]" << endl;
		}
	}
}

/* 
 * accedeVideojuego() permite al usuario [Cliente] acceder a un 
 * videojuego específico a partir de ingresar el nombre de éste.
 *
 * @param string ajuego: nombre de videojuego a acceder en la plataforma
 * @return  
*/
Videojuego Plataforma::accedeVideojuego(string ajuego){
	int j;
	for (int i = 0; i < iv; i++){
		if (ajuego == videojuegos[i].getNombre()){
			j = i;
		}
	}
	return videojuegos[j];
}

/* 
 * muestraVideojuegos() permite al usuario ver los videojuegos
 * disponibles en la plataforma (únicamente nombre y precio).
 *
 * @param
 * @return  
*/
void Plataforma::muestraVideojuegos(){
	cout << "VIDEOJUEGOS.\n";
	for (int i = 0; i < iv; i++){
		cout << "Nombre: " << videojuegos[i].getNombre();
		cout << "\tPrecio: $" << videojuegos[i].getPrecio() << endl;
	}
}

#endif // PLATAFORMA_H