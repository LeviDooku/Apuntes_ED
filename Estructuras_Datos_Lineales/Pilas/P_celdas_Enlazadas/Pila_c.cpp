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

void Pila::borrar(){
	while(primera != nullptr){
		Celda * aux = primera; //Se crea un puntero que retendrá la dirección de memoria de la celda a borrar
		primera = primera -> sig; //Primera pasa a almacenar la dirección de la celda siguiente 
		delete aux; //Se borra la celda auxiliar, que realmente era la anterior a la que ahora apunta primera
	}
}

Pila::Pila(const Pila &P){
	copiar(P);
}

Pila::~Pila(){
	borrar();
}

Pila & operator=(const Pila &P){
	if(this != &P){ //Si las pilas son distintas
		borrar();	//Se borra la pila actual
		copiar(P);	//Y se usa el método copiar para crear una nueva pila igual al argumento
	}

	return * this; //Se devuelve una referencia esta nueva pila
}

bool Pila::empty() const{
	return primera == nullptr;
}

char Pila::top() const{
	assert(primera != nullptr) //Se verifica esta condición en tiempo de ejecución
	return primera -> d;
}

void Pila::push(char c){
	Celda * aux = new Celda; //Se crea una celda auxiliar
	aux -> d = c; //El elemento almacenado en la primera celda de aux pasa a ser 'c'
	aux -> sig = primera; //La siguiente celda de la auxiliar pasa a ser primera
	primera = aux; //Finalmente primera pasa a ser aux, que es la siguiente celda en la pila
}

void Pila::pop(){
	Celda * aux = primera;
	primera = primera -> sig;
	delete aux;
}







