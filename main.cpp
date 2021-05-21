// Ficheros
#include <iostream>
#include <locale.h>
using namespace std;

// Clases
#include "usuario.h"
#include "administrador.h"
#include "cliente.h"

/* 
 * Avance 2: Tienda de Videojuegos Virutales
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 20/05/2021
*/

/* 
 * Descripción:
 * Este programa fue desarrollado con la intención diseñar una plataforma
 * tienda virtual enfocada a la venta de videojuegos digitales.
 * La tienda incluye funciones de búsqueda, de compra y de gestión.
 * Y en este caso, se tienen dos tipos de usuarios: administrador y cliente.
 * NOTA: De momento, siguen en construcción algunas las clases y funciones
 * del programa. Por tanto, para este Avance 2, únicamente se manejan las
 * clases con herencia (Usuario, Administrador y Cliente).
*/

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	// Creación de objetos prueba con parámetros
	Administrador admin("AndresAnba", "Andrés", "Anba Torres", "anbat@gmail.com", "Encargado de tienda");
	Cliente client("SigmaE", "Emma", "Arellanes Garcia", "semarega@gmail.com", 24297491, 2984);
	
	// Prueba de printUsuario(): Información del usuario
	cout << "Informacion del ADMINISTRADOR\n" << admin.printUsuario() << endl;
	cout << "Informacion del CLIENTE\n" << client.printUsuario() << endl;

	// Prueba de visitaPlataforma(), gestionaPlataforma() y compraVideojuego()
	cout << "El usuario visita la plataforma con visitaPlataforma()." << endl;
	admin.visitaPlataforma();
	
	cout << "El administrador gestiona la plataforma con gestionaPlataforma()." << endl;
	admin.gestionaPlataforma();
	
	cout << "El cliente compra videojuegos de la plataforma con compraVideojuego()." << endl;
	client.compraVideojuego();

	// Prueba de setters() y getters() para actualización de datos
	/*CASO: Cambio de nombre de ususario.*/
	cout << "El usuario " << client.getUsername() << " desea cambiar su nombre de usuario a DilemmaE" << endl;
	client.setUsername("DilemmaE");
	cout << "Tras la modificacion. \tUsername: " << client.getUsername() << "\n\n";
	
	/*CASO: Cambio de cargo de administrador.*/
	cout << "El administrador " << admin.getUsername() << "que desempeniaba el cargo de " << admin.getCargo() << "." << endl;
	cout << "Ahora desempenia un nuevo cargo de Encargado de contenido." << endl;
	admin.setCargo("Encargado de contenido");
	cout << "Tras la modificacion. \tCargo: " << admin.getCargo() << "\n\n";
	
	/*CASO: Cambio de saldo disponible (dinero) de cliente.*/
	cout << "El cliente " << client.getUsername() << "compra el Persona® 5 Strikers a un precio de $779.00." << endl;
	cout << "Por tanto, su saldo disponible de $" << client.getDinero() << " sufre modificaciones (-$779.00)." << endl;
	client.setDinero(2169);
	cout << "Tras la modificacion. \tSaldo disponible: $" << client.getDinero() << "\n\n";
	
	return 0;
}

/* 
 * Consideraciones:
 * Existen clases y métodos por definir para implementar todas funcionalidades del programa.
 * Por tanto, se vuelve necesario seguir con el desarollo de éstas en avanves posteriores.
 * Así pues, las líneas de código de visitaPlataforma(), gestionaPlataforma() y compraVideojuego()
 * son temporales hasta incorporar las demás clases.Por otro lado, se seguirán revisando los métodos
 * y clases ya construidas a fin de evitar errores que impidan el correcto funcionamiento del programa.
*/