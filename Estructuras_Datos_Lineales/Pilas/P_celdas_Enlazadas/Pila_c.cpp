/**
* @file Pila_c.cpp
*
**/

#include "Pila_c.h"

void Pila::copiar(const Pila &P){
	if(P.primera == nullptr)

		primera == nullptr; //Si la pila a copiar 'P' está vacía, se crea una pila vacía

	else{ //En caso contrario...

		primera = new Celda; //El puntero apunta a una nueva celda
		primera -> d = P.primera -> d; //Copia el contenido de la primera celda de la pila argumento
		primera -> sig = nullptr; //La siguiente celda será la última y estará vacía

		//Se crean dos punteros auxiliares que apuntan a la última celda de this y a la segunda de 'P'
		Celda * p = primera;
		Celda * q = P.primera -> sig;

		//Bucle que servirá para la copia de las celdas

		while(q ! nullptr){
			p -> sig = new Celda; //Se crea una nueva celda
			p = p -> sig; //Hacemos que 'p' apunte a la nueva celda creada
			p -> d = q -> d; //Se copia en esta celda el elemento de la celda apuntada por 'q'
			p -> sig = nullptr; //Se establece la siguiente celda a 'nullptr', por si fuera esta la última
			q = q -> sig; //El puntero 'q' pasa a apuntar a la siguiente celda en la pila. El proceso se repite hasta que sig = nullptr
		}
	}
}

