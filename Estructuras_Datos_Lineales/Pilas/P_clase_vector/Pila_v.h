/**
* @file Pila_V.h
*
**/

//Implementación del TDA Pila usando la clase template Vector

#ifndef PILA
#define PILA

template <class T>

class Pila{

private:

	std::vector<T> datos;

public:

	/**
	* @brief Método que devuelve "true" si la pila está vacía y "false" en caso contrario
	*
	* @return "true" si la pila está vacía, "false" en caso contrario
	**/

	bool empty() const;

	/**
	* @brief Método que devuelve el tamaño de la pila (número de elementos)
	*
	* @return Número de elementos de la pila
	**/

	int size() const;

	/**
	* @brief Método que elimina el elemento en el tope de la pila
	* 
	**/
	
	void pop();

	/**
	* @brief Método que añade un elemento al principio de la pila
	*
	**/

	void push(const T &c);

	/**
	* @brief Método que devuelve el elemento en el tope de la pila
	*
	* @return Elemento en el tope de la pila
	**/

	T top() const;
};

#include "Pila_v.cpp"

#endif