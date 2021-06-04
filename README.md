# TC1030.1 - Proyecto
El objetivo del proyecto es desarrollar una plataforma o tienda virtual enfocada a la venta de videojuegos digitales. En este caso, se tienen dos tipos de usuarios: administrador y cliente. Es importante mencionar que dependiendo del tipo de usuario se dispondrá de métodos o comportamientos distitnos. 

Así pues, el programa a desarrollar, dispondrá de un cátalogo de videojuegos para los cuales se podrá visualizar sus características más importante, siendo posible la búsqueda de un videojuego en específico. Por otro lado, el cliente tendrá la opción de poder comprar estos videojuegos y el administrador podrá llevar a cabo funciones de gestión del sistema y modificaciones de la plataforma.

En resumen, en cuanto a las funciones del programa encontramos: Funciones de búsqueda, de compra y de gestión.

En cambio, en cuanto a las caraterísticas de los usuarios:

El cliente o usuario registrado es aquel usuario que ha efectuado su alta en el sistema y que puede realizar consultas al catálogo de productos y navegar por este: ver videojuegos, sus descripciones y comprarlos. El administrador es el usuario encargado de realizar todas las funciones de gestión del sistema y modificaciones al mismo.

# Funcionalidad
Por el momento, sigue en desarrollo el main(). Pues, nótese que existen problemas con las opciones de: 2. Buscar videojuego, 3. Comprar videojuego y 4. Modificar videojuego.
Estos errores se trabajarán para el último avance del proyecto. Por ende, el programa actual no representa el funcionamiento definitivo de éste. [En construcción]

# Consideraciones
Para compilar el programa es necesario acceder a la consola e ingresar: "g++ main.cpp"

Para ejecutar, se debe ingresar en la consola: "a.exe" o "./a.exe"

# Correciones / modificaciones
Para esta tercera entrega se realizaron los siguientes cambios:

Se hicieron modificaciones al Diagrama de Clases de Plataforma.

Se considera ahora a la clase Usuario como clase abstracta.

Se desarrolló el main de forma tal que se pueda comprobar por un lado, los métodos de Administrador y por el otro, los métodos de Cliente.
