// Ficheros
#include <iostream>
#include <string>
#include  <bits/stdc++.h>
#include <locale.h>
using namespace std;

// Clases
#include "videojuego.h"
#include "plataforma.h"
#include "usuario.h"
#include "administrador.h"
#include "cliente.h"

/* 
 * Avance Final: Plataforma virtual de Videojuegos
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 08/06/2021 (Avance Final)
 *
 * Descripción:
 * Este programa fue desarrollado con la intención diseñar una plataforma
 * enfocada a la venta de videojuegos digitales. La tienda incluye funciones
 * de búsqueda, de compra y de gestión. Además, ésta esta compuesta por
 * arreglos de Videojeugos y Usuarios.
 * En este caso, se tienen dos tipos de usuarios: administrador y cliente.
*/

// Función menuA(): Imprime las opciones que existen para Administrador
void menuA(){
    cout << "\nMenu:\n";
    cout << "1. Visitar plataforma. \n";
    cout << "2. Buscar videojuego. \n";
    cout << "3. Mostrar ususarios. \n";
    cout << "4. Modificar videojuego. \n";
    cout << "5. Salir \n";
}

// Función menuB(): Imprime las opciones que existen para Cliente
void menuB(){
    cout << "\nMenu:\n";
    cout << "1. Visitar plataforma. \n";
    cout << "2. Buscar videojuego. \n";
    cout << "3. Comprar videojuego. \n";
    cout << "4. Mostrar biblioteca. \n";
    cout << "5. Salir \n";
}

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	// Creación de Plataforma.
	Plataforma plataforma;
	plataforma.creaEjemplos();
	
	// Creación de Usuarios.
	Usuario *usuarios[100];
	usuarios[0] = new Administrador("AlertPrueba", "Administrador", "De Prueba", "wprueba@gmail.com", "Prueba de Administrador");
	usuarios[1] = new Cliente("PruebaDot", "Cliente", "De Prueba", "jprueba@gmail.com", 4839);
	usuarios[2] = new Administrador("AndresAnba", "Andres", "Anba Torres", "anbat@gmail.com", "Encargado de tienda");
	usuarios[3] = new Administrador("RafaelGM", "Rafael", "Guillen Mora", "rafagm@gmail.com", "Encargado de contenido");
	usuarios[4] = new Cliente("SigmaE", "Emma", "Arellanes Garcia", "semarega@gmail.com", 2984);
	usuarios[5] = new Cliente("Alisabel", "Isabel", "Hernandez Fuster", "alifuster@gmail.com", 3462);
	int iu = 6;
	
	// Decisión sobre acceso como Administrador o Cliente.
	int acceso, ide, funcion;
	bool admin, cliente;
	cout << "\nOpciones de acceso: \n";
	cout << "[1] Acceder como Administrador \n[2] Acceder como Cliente" << endl;
	cout << "Introduce tu eleccion sobre ajuste de acceso: ";
	cin >> acceso;
	
	if(acceso == 1){
		ide	= 0;
		admin = true;
		cliente = false;
		cout << "\nHas accesado como Administrador: \n";
		usuarios[ide] -> printUsuario();
	}
	
	else if(acceso == 2){
		ide	= 1;
		admin = false;
		cliente = true;
		cout << "\nHas accesado como Cliente: \n";
		usuarios[ide] -> printUsuario();
	}
	
	else{
		admin = false;
		cliente = false;
	}

	// Prueba de Administrador.
	while(admin){
		menuA();
		cout << "Introduce funcion a ejecutar: ";
		cin >> funcion;
		
		if(funcion == 1){
			cout << "\nLos usuarios pueden acceder a la plataforma y" << endl;
			cout << "ver los videojuegos disponibles en esta: \n" << endl;
			usuarios[ide] -> visitaPlataforma(plataforma);		
		}

		else if(funcion == 2){
			string titulo;
			cout << "\nLos usuarios pueden buscar un videojuego en la plataforma" << endl;
			cout << "introduciendo su titulo para ver su descripcion completa." << endl;
			cout << "Introduce el nombre del videojuego a buscar: ";
			cin.ignore();
			getline(cin, titulo);
			cout << "\nINFORMACION DEL VIDEOJUEGO." << endl;
			usuarios[ide] -> visualizaVideojuego(plataforma, titulo);
		}
		
		else if(funcion == 3){
			cout << "\nAl ser administrador, tu " << usuarios[ide] -> getUsername() << ", puedes monitorear a los usuarios" << endl;
			cout << "registrados en la plataforma, incluidos a otros administradores: \n" << endl;
			cout << "INFORMACION DE USUARIOS. " << endl;
			for (int i = 0; i < iu; i++){
				usuarios[i] -> printUsuario();
				cout <<	endl;			
			}	
		}
		
		else if(funcion == 4){
			string mjuego;
			float nprecio;
			cout << "\nAl ser administrador, tu " << usuarios[ide] -> getUsername() << ", puedes modificar" << endl;
			cout << "el precio de un videojuego." << endl;
			cout << "Introduce el titulo del videojuego a modificar: ";
			cin.ignore();
			getline(cin, mjuego);
			cout << "Introduce el nuevo precio para el videojuego: ";
			cin >> nprecio;
			usuarios[ide] -> modificaVideojuego(&plataforma, mjuego, nprecio);			
		}
		
		else if(funcion == 5){
			cout << "\nGracias por utilizar el programa.\n"  << endl;
			break;		
		}
		
		else{
			cout << "\nError. Opcion invalida.\n" << endl;
			break;
		}
	}
	
	// Prueba de Cliente.
	while(cliente){
		menuB();
		cout << "Introduce funcion a ejecutar: ";
		cin >> funcion;
		
		if(funcion == 1){
			cout << "\nLos usuarios pueden acceder a la plataforma y" << endl;
			cout << "ver los videojuegos disponibles en esta: \n" << endl;
			usuarios[ide] -> visitaPlataforma(plataforma);	
		}

		else if(funcion == 2){
			string titulo;
			cout << "\nLos usuarios pueden buscar un videojuego en la plataforma" << endl;
			cout << "introduciendo su titulo para ver su descripcion completa." << endl;
			cout << "Introduce el titulo del videojuego a buscar: ";
			cin.ignore();
			getline(cin, titulo);
			cout << "\nINFORMACION DEL VIDEOJUEGO." << endl;
			usuarios[ide] -> visualizaVideojuego(plataforma, titulo);
		}
		
		else if(funcion == 3){
			string cjuego;
			cout << "\nAl ser un cliente, tu " << usuarios[ide] -> getUsername() << ", puedes comprar videojuegos" << endl;
			cout << "de la plataforma y agregarlos a tu biblioteca." << endl;
			cout << "Introduce el titulo del videojuego a comprar: ";
			cin.ignore();	
			getline(cin, cjuego);			
			usuarios[ide] -> compraVideojuego(plataforma, cjuego);
		}
		
		else if(funcion == 4){
			cout << "\nAl ser un cliente, tu " << usuarios[ide] -> getUsername() << ", puedes ver los videojuegos" << endl;
			cout << "que has adquirido en tu biblioteca." << endl;
			usuarios[ide] -> muestraBiblioteca();
		}
		
		else if(funcion == 5){
			cout << "\nGracias por utilizar el programa.\n"  << endl;
			break;		
		}
		
		else{
			cout << "\nError. Opcion invalida.\n" << endl;
			break;
		}
	}
		
	// Destrucción de objetos creados en el heap
	for (int i = 0; i < iu; i++)
		delete usuarios[i];
	
	return 0;
}