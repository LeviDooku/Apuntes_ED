/**
* @file Pila_V.cpp
*
**/

#include<vector>

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

void Pila<T>::push(T &c){
	datos.push_back();
}

template <class T>

T Pila<T>::top() const{
	return datos[datos.size() - 1];
}