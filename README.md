# Apuntes_ED

Apuntes que voy recopilando de las clases tanto teóricas como prácticas de la asignatura Estructuras de Datos
de 2º de Ingeniería Informática de la UGR (primer cuatrimestre).  
  
Todos los directorios tiene su respectiva documentación generada con Doxygen, ya que es obligatorio en esta asignatura.

## Información útil

- Estructura y compilación de clases plantilla:  
  
Si modularizamos un proyecto de C++ (recomendable) usando clases / funciones plantillas, debemos seguir la siguiente estructura:

En el fichero `.h`: Antes de empezar con la declaración de la clase ponemos la palabra reservada `template` de la siguiente forma: `template <class T>` ("class" es sustituible por "typename"). Al _final_ de la declaración de la clase debemos incluir el archivo `.cpp` que incluya la implementación de los métodos de la clase.  

En el fichero `.cpp`: Debemos incluir el fichero `.h` con `#include "Ejemplo.h"` al principio. En cada función que implementemos debemos incluir `template <class T>`. En la cabecera de cada función y constructores incluimos el nombre de la clase de esta forma: `void Ejemplo<T>::sample()`.  

En el fichero que contenga `main`: Incluimos el fichero `.h`.  

Compilación: Debido a que el fichero `.h` está incluyendo a su vez el fichero con la implementación de las funciones, no es necesario compilar el último mencionado. Es decir, si tenemos un proyecto que contiene: `Ejemplo.h`, `Ejemplo.cpp` y `main.cpp`, podemos compilar haciendo simplemente: `g++ main.cpp -o programa`.

- Origen del código:

Como indica en el nombre del repositorio, el código presente en estos archivos no es mío. Lo he sacado de las transparencias/apuntes y diversos recursos que se nos brindan en esta asignatura. El objetivo de este repositorio es meramente formar un recopilatorio.  

También se incluye algunas soluciones a exámenes de prácticas resueltos por mí, esto quiere decir que no tienen por qué estar perfectos

## Tema 1 (Eficiencia)

- Algoritmos pertenecientes al Tema 1:  

	- Algoritmos de Ordenacion:
		- [`alg_insercion.cpp`](Algoritmos_Ordenacion/alg_insercion.cpp): Contiene a función de ordeación por inserción de un vector de enteros. O(n^2)
		- [`alg_seleccion.cpp`](Algoritmos_Ordenacion/alg_seleccion.cpp): Contiene a función de ordeación por seleccion de un vector de enteros. O(n^2)
		- [`bubble_sort.cpp`](Algoritmos_Ordenacion/bubble_sort.cpp): Contiene a función de ordeación mediante bubble sort de un vector de enteros. O(n^2)
		- [`merge_sort.cpp`](Algoritmos_Ordenacion/merge_sort.cpp): Contiene a función de ordeación mediante merge sort de un vector de enteros. O(n log n)

## Tema 2 (Abstracción) / Tema 3 (Templates)

- Algoritmos pertenecientes al Tema 2:  

	- Funciones plantilla:
		- [`Ejemplos.cpp`](Funciones_Plantilla/Ejemplos.cpp): Contiene una serie de funciones plantilla y un pequeño programa para probar su funcionamiento.  

	- Clases plantilla: 
		- [`VD.h`](Clases_Plantilla/VD.h): Fichero con la declaración de una clase plantilla VD (vector dinámico) 
		- [`VD.cpp`](Clases_Plantilla/VD.cpp): Fichero con la implementación de los métodos de la clase VD (vector dinámico)

## Tema 4 (Estructuras de datos lineales)

- Pilas:  

	- [P_clase_vector](Estructuras_Datos_Lineales/Pilas/P_clase_vector): Implementación de una clase template Pila, cuyos métodos están implementados usando la clase `vector`. Se incluye un archivo `main.cpp` con un programa simple de prueba.
	- [P_celdas_Enlazadas](Estructuras_Datos_Lineales/Pilas/P_celdas_Enlazadas): Implementación de una pila que almacena tipos `char` mediante celdas enlazadas.

- Colas:  

	- [C_celdas_enlazadas](Estructuras_Datos_Lineales/Colas/P_celdas_enlazadas): Implementación de una clase template Cola que usa celdas enlazadas.
	- [C_celdas_enlazadas](Estructuras_Datos_Lineales/Colas/P_celdas_enlazadas): Implementación de una clase template Cola que usa un vector circular (hay cosas que aún no entiendo).
	- [`C_prioridad.cpp`](Estructuras_Datos_Lineales/Colas/C_prioridad/C_prioridad.cpp): Ejemplo de un programa que usa la clase "priority_queue" de la STL para generar dos colas con valores enteros introducidos por el usuario.

## Tema 5 (stl)

- [Pilas](stl/Pilas): pilas usando la clase `vector` y `stack` de la STL: ([Página oficial](https://cplusplus.com/reference/stack/stack/?kw=stack))
	- [`ejemplo1.cpp`](stl/Pilas/ejemplo1.cpp): Implementación de una pila usando la clase vector de la stl  
	- [`ejemplo2.cpp`](stl/Pilas/ejemplo1.cpp): Mismo programa que el implementado en la pila con clase vector, pero usando la clase stack ([Programa referenciado](Estructuras_Datos_Lineales/Pilas/P_clase_vector/main.cpp)) 
	- [`ejemplo3.cpp`](stl/Pilas/ejemplo1.cpp): Implementación de dos pilas en las que se usan distintos métodos como swap().

- [Colas](stl/Colas): colas y colas con prioridad de la clase `queue` de la STL: ([Página oficial](https://cplusplus.com/reference/queue/queue/?kw=queue))
	- [`ejemplo1.cpp`](stl/Colas/ejemplo1.cpp): Ejemplo básico de utilización de las colas
	- [`ejemplo2.cpp`](stl/Colas/ejemplo2.cpp): Ejemplo de los apuntes con alguna modificación
	- [`ejemplo3.cpp`](stl/Colas/ejemplo3.cpp): Ejemplo de uso de una cola con prioridad
	- [`examen1.cpp`](stl/Colas/examen1.cpp)
	- [`examen2.cpp`](stl/Colas/examen2.cpp)
	- [`examen3.cpp`](stl/Colas/examen3.cpp)

- [Listas](stl/Listas): listas usando la clase `list` de la STL: ([Página oficial](https://cplusplus.com/reference/list/list/?kw=list))
	- [`ejemplo1.cpp`](stl/Listas/ejemplo1.cpp): Ejemplo básico de utilización de las listas
	- [`ejemplo2.cpp`](stl/Listas/ejemplo2.cpp): Comprobar si una lista de caracteres es palíndromo, se usan iteradores
	- [`ejemplo3.cpp`](stl/Listas/ejemplo3.cpp): Ejemplo de uso de los método assign, insert, swap, erase y clear
	- [`ejemplo4.cpp`](stl/Listas/ejemplo4.cpp): Ejercicio, eliminar pares de una lista
	- [`ejemplo5.cpp`](stl/Listas/ejemplo5.cpp): Ejercicio, dadas dos listas de enteros devuelva una tercera con los elementos de ambas concatenadas
	- [`ejemplo6.cpp`](stl/Listas/ejemplo6.cpp): Ejemplo de uso del método splice
	- [`ejemplo7.cpp`](stl/Listas/ejemplo7.cpp): Ejercicio, dada dos listas de enteros, mover los pares a una lista, quedando una de pares e impares

- [Set y multiset](stl/Set): conjuntos ordenados usando la clase `set` de la STL: ([Página oficial](https://cplusplus.com/reference/set/set/?kw=set))
	- [`ejemplo1.cpp`](stl/Set/ejemplo1.cpp): Familiarizarse con la estructura set, que solo almacena claves únicas
	- [`ejemplo2.cpp`](stl/Set/ejemplo2.cpp): Ejemplo de uso del método find
	- [`ejemplo3.cpp`](stl/Set/ejemplo3.cpp): Introducción a las diferencias entre set y multiset
	- [`ejemplo4.cpp`](stl/Set/ejemplo4.cpp): Cambiar el orden de ordenación por defecto (poco relevante)
	- [`ejemplo5.cpp`](stl/Set/ejemplo5.cpp): Ejemplo de uso del método equal range
	- [`ejemplo6.cpp`](stl/Set/ejemplo6.cpp): Crear una función que devuelva la intersección de dos conjuntos
	- [`ejemplo7.cpp`](stl/Set/ejemplo7.cpp): Dados dos conjuntos, obtener la unión de ambos
	- [`ejemplo8.cpp`](stl/Set/ejemplo8.cpp): Sobrecargar el operator + para obtener la intersección de dos conjuntos
	- [`pre1.cpp`](stl/Set/pre1.cpp): (ejercicio preparatorio) crear una función para decidir si dos conjuntos son o no complementarios
	- [`pre4.cpp`](stl/Set/pre4.cpp): (ejercicio preparatorio) crear una función para obtener un mapa con clave de enteros y valor asociado el número de veces que se repite esta clave.

- [Map y multimap](stl/Map): ED basada en parejas (clave y valor asociado). Se usa la clase `map`
	- [`ejemplo1.cpp`](stl/Set/ejemplo1.cpp): Introducción a la clase map
	- [`pre3.cpp`](stl/Set/pre3.cpp): (ejercicio preparatorio) contar las vocales en palabras
	- [`pre2.cpp`](stl/Set/pre2.cpp): (ejercicio preparatorio) crear un mapa a partir de un multimap




