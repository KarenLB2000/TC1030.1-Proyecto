# TC1030.1 - Proyecto
El objetivo del proyecto es desarrollar una plataforma o tienda virtual enfocada a la venta de videojuegos digitales. En este caso, se tienen dos tipos de usuarios: administrador y cliente. Es importante mencionar que dependiendo del tipo de usuario se dispondrá de métodos o comportamientos distitnos. 

Así pues, el programa a desarrollar, dispondrá de un cátalogo de videojuegos para los cuales se podrá visualizar sus características más importante, siendo posible la búsqueda de un videojuego en específico. Por otro lado, el cliente tendrá la opción de poder comprar estos videojuegos y el administrador podrá llevar a cabo funciones de gestión del sistema y modificaciones de la plataforma.

En resumen, en cuanto a las funciones del programa encontramos: Funciones de búsqueda, de compra y de gestión.

En cambio, en cuanto a las caraterísticas de los usuarios:

El cliente o usuario registrado es aquel usuario que ha efectuado su alta en el sistema y que puede realizar consultas al catálogo de productos y navegar por este: ver videojuegos, sus descripciones y comprarlos. El administrador es el usuario encargado de realizar todas las funciones de gestión del sistema y modificaciones al mismo.

# Funcionalidad
Por el momento, siguen en desarrollo las funciones del programa. Por tanto, el contenido actual no representa el funcionamiento definito de éste. [En construcción]

# Consideraciones
Para compilar el programa es necesario acceder a la consola e ingresar: "g++ main.cpp"

Para ejecutar, se debe ingresar en la consola: "a.exe" o "./a.exe"

# Correciones / modificaciones
Para esta segunda entrega se realizaron los siguientes cambios:

Se modificó el Diagrama de Clases de Plataforma.

Se agregó la clase abstracta Usuario y sus clases hijas Cliente y Administrador, implementando así las clases con herencia.
