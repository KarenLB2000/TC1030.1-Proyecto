// Ficheros
#include <iostream>
#include <locale.h>
using namespace std;

// Clases
#include "videojuego.h"
#include "plataforma.h"
#include "usuario.h"
#include "administrador.h"
#include "cliente.h"

/* 
 * Avance 4: Plataforma virtual de Videojuegos
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 03/06/2021 (Avance 4)
 *
 * Descripción:
 * Este programa fue desarrollado con la intención diseñar una plataforma
 * enfocada a la venta de videojuegos digitales. La tienda incluye funciones
 * de búsqueda, de compra y de gestión. Además, ésta esta compuesta por
 * arreglos de Videojeugos y Usuarios.
 * En este caso, se tienen dos tipos de usuarios: administrador y cliente.
 *
 * NOTA: Existen problemas con las opciones de: 
 * 2. Buscar videojuego, 3. Comprar videojuego y 4. Modificar videojuego
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
	int acceso = 0;
	cout << "\nOpciones de ajuste de acceso: \n";
	cout << "[1] Acceder como Administrador \n[2] Acceder como Cliente" << endl;
	cout << "Introduce tu eleccion sobre ajuste de acceso: ";
	cin >> acceso;
	
	// Decisión sobre creación de Usuario.
	int opcion = 0;
	int ide = 0;
	cout << "\nOpciones sobre creación de Usuario: \n";
	cout << "[1] Crear Usuario. \n[2] Utilizar Usuario de Prueba." << endl;
	cout << "Introduce tu eleccion sobre creación de Usuario:";
	cin >> opcion;
	
	if((acceso == 1) && (opcion == 1)){
		// Variables de Admnistrador
		string user, nombre, apellidos, correo;
		string type = "Administrador";
		string puesto = "Encargado de usuarios";	
		
		cout <<"\nCreación de Administrador.";
		cout << "\nIntroduce nombre de usuario (username): ";
		cin >> user;
		cout << "Introduce tu(s) nombre(s): ";
		getline(cin, nombre);
		cin.ignore();
		cout << "Introduce tus apellidos: ";
		getline(cin, apellidos);
		cin.ignore();		
		cout << "Introduce tu dirección de correo electrónico o email: ";
		cin >> correo;
		usuarios[iu] = new Administrador(user, nombre, apellidos, correo, puesto);
		ide = iu;
		iu++;
	}
	
	else if((acceso == 2)&&(opcion == 1)){
		// Variables de Cliente
		string user, nombre, apellidos, correo;
		string type = "Cliente";
		float dinero = 5000;	
		
		cout <<"\nCreación de Cliente.";
		cout << "\nIntroduce nombre de usuario (username): ";
		cin >> user;
		cout << "Introduce tu(s) nombre(s): ";
		getline(cin, nombre);
		cin.ignore();
		cout << "Introduce tus apellidos: ";
		getline(cin, apellidos);
		cin.ignore();		
		cout << "Introduce tu dirección de correo electrónico o email: ";
		cin >> correo;
		usuarios[iu] = new Cliente(user, nombre, apellidos, correo, dinero);
		ide = iu;
		iu++;
	}
	
	else if((acceso == 1)&&(opcion == 2)){
		ide	= 0;
	}
	
	else if((acceso == 2)&&(opcion == 2)){
		ide	= 1;
	}
	
	// Prueba de Administrador.
	int funcion = 0;
	bool admin = false;
	if(acceso == 1)
		admin = true;
	
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
			Videojuego bv;
			cout << "\nLos usuarios pueden buscar un videojuego en la plataforma" << endl;
			cout << "introduciendo su nombre para ver su descripcion completa." << endl;
			cout << "Introduce el nombre del videojuego a buscar: ";
			getline(cin, titulo);
			cin.ignore();
			bv = plataforma.buscaVideojuego(titulo);
		}
		
		else if(funcion == 3){
			cout << "\nAl ser administrador, tu " << usuarios[ide] -> getNombre() << ", puedes monitorear a los usuarios" << endl;
			cout << "registrados en la plataforma, incluidos a otros administradores: \n" << endl;
			cout << "INFORMACION DE USUARIOS. " << endl;
			for (int i = 0; i < iu; i++)
				usuarios[i] -> printUsuario();			
		}
		
		else if(funcion == 4){
			string vm;
			float newp;
			cout << "\nAl ser administrador, tu " << usuarios[ide] -> getNombre() << ", puedes modificar" << endl;
			cout << "el precio de un videojuego." << endl;
			cout << "Introduce el nuevo precio para el videojuego: ";
			cin >> newp;
			cout << "Introduce el nombre del videojuego a modificar: ";
			getline(cin, vm);
			cin.ignore();
			usuarios[ide] -> modificaVideojuego(plataforma, vm, newp);			
		}
		
		else if(funcion == 5){
			cout << "\nGracias por utilizar el programa. \n";
			break;		
		}
		
		else{
			cout << "\nError. Opción inválida. \n";
			break;
		}
	}
	
	// Prueba de Cliente.
	funcion = 0;
	bool cliente = false;
	if(acceso == 2)
		cliente = true;
	
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
			cout << "introduciendo su nombre para ver su descripción completa." << endl;
			cout << "Introduce el nombre del videojuego a buscar: ";
			getline(cin, titulo);
			Videojuego bv = plataforma.buscaVideojuego(titulo);
			bv.printVideojuego();
		}
		
		else if(funcion == 3){
			string vc;
			cout << "\nAl ser un cliente, tu" << usuarios[ide] -> getNombre() << ", puedes comprar videojuegos" << endl;
			cout << "de la plataforma y agregarlos a tu biblioteca." << endl;
			cout << "Introduce el nombre del videojuego a comprar: ";
			getline(cin, vc);
			cin.ignore();			
			usuarios[ide] -> compraVideojuego(plataforma, vc);
		}
		
		else if(funcion == 4){
			cout << "\nAl ser un cliente, tu" << usuarios[ide] -> getNombre() << "puedes ver los videojuegos" << endl;
			cout << "que has adquirido en tu biblioteca." << endl;
			cout << "Biblioteca de " << usuarios[ide] -> getUsername() << "." << endl;
			usuarios[ide] -> muestraBiblioteca();
		}
		
		else if(funcion == 5){
			cout << "\nGracias por utilizar el programa. \n";
			break;		
		}
		
		else{
			cout << "\nError. Opción inválida. \n";
			break;
		}
	}
		
	// Destrucción de objetos creados en el heap
	for (int i = 0; i < iu; i++)
		delete usuarios[i];
	
	return 0;
}