# TC1030.1 - Proyecto
El objetivo del proyecto es desarrollar una plataforma o tienda virtual enfocada a la venta de videojuegos digitales. En este caso, se tienen dos tipos de usuarios: administrador y cliente. Es importante mencionar que dependiendo del tipo de usuario se dispondrá de métodos o comportamientos distitnos. 

Así pues, en el programa, la plataforma cuante con una serie de videojuegos para los cuales se pueden visualizar sus características más importante, siendo posible además la búsqueda y acceso a un videojuego en específico en ésta. Por otro lado, el cliente tendrá la opción de poder comprar estos videojuegos y el administrador podrá llevar a cabo funciones de gestión del sistema y modificaciones de la plataforma.

En resumen, en cuanto a las funciones del programa encontramos: Funciones de búsqueda, de compra y de gestión.

En cambio, en cuanto a las caraterísticas de los usuarios:

El cliente o usuario registrado es aquel usuario que ha efectuado su alta en el sistema y que puede realizar consultas sobre los videojuego en la plataforma y navegar por esta: ver las descripciones completas y abreviadas de los videojuegos e incluso comprarlos, agregándolos a su biblioteca. Por otra parte, el administrador es el usuario encargado de realizar todas las funciones de gestión del sistema, siendo capaz de modificar el precio de los videojuegos de la plataforma.

# Funcionalidad
En el main() es posible seleccionar entre acceder como Cliente o Administrador, donde para cada uno se ha desarrollado un menú de opciones diferentes en que se muestran los distintos comportamientos de cada uno.

# Consideraciones
Para compilar el programa es necesario acceder a la consola e ingresar: "g++ main.cpp"

Para ejecutar, se debe ingresar en la consola: "a.exe" o "./a.exe"

Asimismo, considerese que el programa no se ejecutará ni actuará de la forma espereada en el caso de:

Introducir un tipo de dato diferente al esperado.

Introducir el tipo de dato esperado, pero, no presente en las opciones dadas [Ej. Introducir una opción inválida en el menú de Cliente o Administrador]

# Correciones
Para este último avance se realizaron los siguientes cambios:

Se hicieron modificaciones al Diagrama de Clases de Plataforma.

Se desarrolló el main de forma tal que se pueda comprobar por un lado, los métodos de Administrador y por el otro, los métodos de Cliente.
