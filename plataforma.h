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
 * 25/05/2021 (Avance 3)
*/

/* 
 * Descripción:
 * Clase Plataforma compuesta por Videojuegos y Usuarios: 
 * Admnistrador y Cliente. Representa una plataforma o tienda
 * de videojuegos digitales con funciones de búsqueda, compra
 * y gestión.
*/

// Declaración de Clase: Plataforma
class Plataforma{
	// Atributos (características)
	private:
		Videojuego videojuegos[100];
		// Usuario *usuarios[100];
		int iv;
		
	// Métodos (comportamientos)
	public:
		//Constructor por default
		Plataforma();

		// Métodos miembros de la clase
		void creaEjemplos();
		Videojuego buscaVideojuego(string nj);
		void muestraVideojuegos();
		// void muestraUsuarios();
};

/* 
 * Constructor por default
 * @param 
 * @return Objeto Hospital 
*/
Plataforma::Plataforma(){
	iv = 0;
	// iu = 0;
}

/* 
 * Crea ejemplos de videojuegos e usuarios
 * @param 
 * @return
*/
void Plataforma::creaEjemplos(){
	string n = "Persona® 5 Strikers";
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
	
	n = "Subnautica: Below Zero";
	g = "Simulacion";
	d = "Sumergete en una gelida aventura subacuatica en un planeta alienigena.\n";
	p = 279.99;
	Videojuego v2(n, d, g, p);
	videojuegos[2] = v2;
	
	n = "Carcassonne - Tiles & Tactics";
	g = "Estrategia";
	d = "¡Adaptacion oficial del famoso juego de mesa Carcassonne!\n";
	p = 113.99;
	Videojuego v3(n, d, g, p);
	videojuegos[3] = v3;
	
	iv = 4;
	
	/* usuarios[0] = new Administrador("AndresAnba", "Andres", "Anba Torres", "anbat@gmail.com", "Encargado de tienda");
	usuarios[1] = new Administrador("RafaelGM", "Rafael", "Guillen Mora", "rafagm@gmail.com", "Encargado de contenido");
	usuarios[2] = new Cliente("SigmaE", "Emma", "Arellanes Garcia", "semarega@gmail.com", 2984);
	usuarios[3] = new Cliente("Alisabel", "Isabel", "Hernandez Fuster", "alifuster@gmail.com", 3462);
	iu = 4; */
}

/* 
 * Permite al usuario buscar un videojuego específico a partir de 
 * ingresar el nombre de éste para ver así su descripción  completa.
 * @param string nj: nombre de videojuego a buscar en el catálogo
 * @return  
*/
Videojuego Plataforma::buscaVideojuego(string nj){
	int nv;
	for (int i = 0; i < iv; i++)
		if (nj == videojuegos[i].getNombre())
			nv = i;		
	return videojuegos[nv];
}

/* 
 * Permite al usuario ver los videojuegos disponibles en la
 * plataforma (únicamente nombre y precio).
 * @param
 * @return  
*/
void Plataforma::muestraVideojuegos(){
	cout << "VIDEOJUEGOS.\n";
	for (int i = 0; i < iv; i++)
		cout << "Nombre: " << videojuegos[i].getNombre() << "\tPrecio: $" << videojuegos[i].getPrecio() << endl;
}

/* 
 * Permite al usuario (administrador) ver los usuarios registrados en la
 * plataforma: a clientes y a otros administradores.
 * @param
 * @return  
*/

/* void Plataforma::muestraUsuarios(){
	cout << "Información de usuarios: ";
	for (int i = 0; i < iu; i++)
		usuarios[i] -> printUsuario();
}	
 */
#endif // PLATAFORMA_H