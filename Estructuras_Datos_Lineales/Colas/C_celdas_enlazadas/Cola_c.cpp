/**
* @file Cola_c.cpp
*
**/

#include "Cola_c.h"

template<class T>

void Cola<T>::copiar(const Cola<T> &c){
	if(c.primera == nullptr){
		primera = nullptr;
		ultima = nullptr;
	}
	else{
		primera = new Celda(c.primera -> dato, nullptr);
		ultima = primera;
		Celda<T> q = c.primera -> sig;

		while(q != nullptr){
			ultima -> sig = new Celda(q -> dato, nullptr);
			ultima = ultima -> sig;
			q = q -> sig;
		}
	}
}

template<class T>

void Cola<T>::borrar(){
	while(primera != nullptr){
		Celda * aux= primera;
		primera = primera -> sig;
		delete aux;
	}
	ultima = 0;
}

template<class T>

Cola<T>::Cola(){
	primera = nullptr;
	ultima = nullptr;

}

template<class T>

Cola<T>::Cola(const Cola<T> &c){
	copia(c);
}

template<class T>

Cola<T>::~Cola(){
	borrar();
}

template<class T>

Cola<T>::Cola<T> &operator=(const Cola<T> &c){
	if(this != nullptr){
		borrar();
		copiar(c);
	}

	return * this;
}

template<class T>

T Cola<T>::front() const{
	assert(primera != nullptr);
	return primera -> dato;

}

template<class T>

void Cola<T>::pop(){
	assert(primera != nullptr);
	Celda<T> aux = primera;
	primera = primera -> sig;
	delete aux;

}

template<class T>

void Cola<T>::push(const T& c){
	Celda<T> * aux = new Celda(c, nullptr);
	if(primera == nullptr){
		primera = aux;
		ultima = aux;
	}
	else{
		ultima -> sig = aux;
		ultima = aux;
	}
}

template<class T>

bool Cola<T>::empty() const{
	return primera == nullptr;
}



