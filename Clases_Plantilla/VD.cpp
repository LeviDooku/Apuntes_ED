/**
* @file VD.cpp
*
**/

#include "VD.h"
#include<iostream>
using namespace std;

//Implementación de los métodos

template <class T>

void VD<T>::Resize(int nuevo_tam){

	T * aux = new T[nuevo_tam];
	int minimo = (n < nuevo_tam)?:nuevo_tam;

	/*
	int minimo = (n < nuevo_tam)?:nuevo_tam;
	
	=

	int minimo;

	if (n < nuevo_tam) {
	    minimo = nuevo_tam;
	} 
	else {
	    minimo = n;
	}
	*/

	for(int i = 0; i < minimo; i++){
		*(aux + i) = *(datos + i);
	}

	delete [] datos;
	datos = aux;
	reservados = nuevo_tam;
	n = minimo;
}

template <class T>

VD<T>::VD(const VD<T>, &otro){
	reservados = otro.reservados;
	n = otro.n;
	datos = new T[reservados];

	for(int i = 0; i < n; i++){
		*(datos + i) = *(otro.datos + i);
	}
}

template <class T>

VD<T>::~VD(){
	if(datos != nullptr){
		delete [] datos;
	}
}

template <class T>

VD<T>::VD<T> & operator=(const VD<T> & otro){
	if(this != &otro){
		if(datos != 0){
			delete [] datos;
		}
        for (int i = 0; i < n; i++)
            *(datos + i) = *(otro + i);
	}
	return * this;
}

template <class T>

void VD<T>::Insertar(int pos, const T &nuevo){
	if(n == reservados){
		Resize(2*reservados);
	}

	for(int i = n - 1; i >= pos; i--){
		*(datos + (i+1)) = *(datos + i);
	}

	*(datos + pos) = nuevo;
	n++;
}

template <class T>

void VD<T>::Borrar(int pos){
	for(int i = pos; i < n-1; i++)
		*(datos + i) = *(datos + (i+1));

	n--;

	if(n < reservados/4)
		Resize(reservados/2);
}

template <class T>

T & VD<T>::operator[](int i){
	assert(i >= 0 && i < n);
	return *(datos + i);
}