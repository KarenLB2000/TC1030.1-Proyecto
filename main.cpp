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
 * Avance 2: Tienda virtual de Videojuegos
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 27/05/2021 (Avance 3)
*/

/* 
 * Descripción:
 * Este programa fue desarrollado con la intención diseñar una plataforma
 * enfocada a la venta de videojuegos digitales. La tienda incluye funciones
 * de búsqueda, de compra y de gestión. Además, ésta esta compuesta por
 * arreglos de Videojeugos y Usuarios.
 * En este caso, se tienen dos tipos de usuarios: administrador y cliente.
 * NOTA: De momento, sigue en construcción la estructura final del main() y
 * ciertas funciones de la clase Usuario.
*/

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	// Creación de la plataforma.
	Plataforma plataforma;
	plataforma.creaEjemplos();
	
	// Creación de Usuarios.
	Usuario *usuarios[100];
	usuarios[0] = new Administrador("AndresAnba", "Andres", "Anba Torres", "anbat@gmail.com", "Encargado de tienda");
	usuarios[1] = new Administrador("RafaelGM", "Rafael", "Guillen Mora", "rafagm@gmail.com", "Encargado de contenido");
	usuarios[2] = new Cliente("SigmaE", "Emma", "Arellanes Garcia", "semarega@gmail.com", 2984);
	usuarios[3] = new Cliente("Alisabel", "Isabel", "Hernandez Fuster", "alifuster@gmail.com", 3462);
	int iu = 4;
	
	// Prueba de Usuario: visitaPlataforma()[Usuario] -> muestraVideojuegos() [Plataforma]
	cout << "\nLos usuarios pueden acceder a la plataforma y" << endl;
	cout << "ver los videojuegos disponibles en esta: \n" << endl;
	usuarios[0] -> visitaPlataforma(plataforma);
		
	// Prueba de Administrador: printUsuario()[Usuario] -> POLIMORFISMO
	cout << "\nEl administrador " << usuarios[0] -> getNombre() << " monitorea a todos los usuarios" << endl;
	cout << "registrados, incluidos otros administradores: \n" << endl;
	cout << "INFORMACION DE USUARIOS. " << endl;
	for (int i = 0; i < iu; i++)
		usuarios[i] -> printUsuario();
	
	// Prueba de Administrador: modificaVideojuego()[Admin] -> buscaVideojuego()[Plataforma] -> 
	// printVideojuego() y setPrecio()[Videojuego]
	cout << "El administrador " << usuarios[1] -> getNombre() << " puede modificar" << endl;
	cout << "el precio de un videojuego: \n" << endl;
	usuarios[1] -> modificaVideojuego(plataforma, "Persona® 5 Strikers", 250);
	
	// Prueba de Cliente: compraVideojuego()[Cliente] -> buscaVideojuego()[Plataforma] ->
	// printVideojuego(), getPrecio() y getNombre[Videojuego]
	cout << "El/La client@ " << usuarios[2] -> getNombre() << " puede comprar vidoejuegos" << endl;
	cout << "en la plataforma: \n" << endl;
	usuarios[2] -> compraVideojuego(plataforma, "DOOM Eternal");
	
	// Prueba de Cliente: muestraBiblioteca()[Cliente]
	cout << "\nLos clientes pueden ver los videojuegos adquiridos en la biblioteca: \n" << endl;
	cout << "Biblioteca de " << usuarios[2] -> getUsername() << "." << endl;
	usuarios[2] -> muestraBiblioteca();
	cout << "\nBiblioteca de " << usuarios[3] -> getUsername() << "." << endl;
	usuarios[3] -> muestraBiblioteca();
	cout << "En este caso el usuario " << usuarios[3] -> getUsername() << endl;
	cout << "no tiene aún videojuegos en su biblioteca.\n" << endl;
	
	// Destrucción de objetos creados en el heap
	for (int i = 0; i < iu; i++)
		delete usuarios[i];
	
	return 0;
}