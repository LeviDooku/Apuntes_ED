/**
* @file main.cpp
*
**/

//Pequeño programa para comprobar si funciona la clase Pila

#include<iostream>
#include<vector>
#include "Pila_v.h"
using namespace std;

int main(){

	Pila<char> p;
	Pila<char> aux;

	char dato;

	cout << "Inserte una frase: " << endl;

	while((dato = cin.get()) != '\n'){
		p.push(dato);
	}

	/*
	En este punto la pila "p" se encuentra cargada con la frase introducida.
	
	"Hola"

	p:
	
	H | o | l | a <- TOPE
	*/

	/*
	El único método que tenemos implementado de obtención de elementos es el 
	que devuelve el elemento en el tope. 

	Esto se traduce en que la salida será:

	aloH

	Por ello copiamos el contenido en una pila auxiliar.

	aux:

	a | l | o | H <- TOPE 
	*/

	while(!p.empty()){
		cout << p.top();
		aux.push(p.top());
		p.pop();
	}

	/*
	La salida ahora será la correcta
	*/

	while(!q.empty()){
		cout << aux.top();
		aux.pop();
	}


}