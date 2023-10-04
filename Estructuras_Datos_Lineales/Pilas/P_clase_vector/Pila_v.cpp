/**
* @file Pila_V.cpp
*
**/

#include<vector>
#include "Pila_v.h"

template <class T>

bool Pila<T>::empty() const{
	return datos.size()==0;
}

template <class T>

int Pila<T>::size() const{
	return datos.size();
}

template <class T>

void Pila<T>::pop(){
	datos.pop_back();
}

template <class T>

void Pila<T>::push(const T &c){
	datos.push_back(c);
}

template <class T>

T Pila<T>::top() const{
	return datos[datos.size() - 1];
}