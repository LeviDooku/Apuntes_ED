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

