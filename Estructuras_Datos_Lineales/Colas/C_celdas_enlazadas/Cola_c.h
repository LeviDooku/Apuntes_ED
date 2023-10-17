/**
* @file Cola_c.h
*
**/

//Haremos una clase plantilla declarando una cola de celdas enlazadas

#ifndef COLA
#define COLA

template <class T>

class Cola{

private:

	struct Celda{
		T dato;
		Celda * sig;
		Celda(const T &d, Celda *s){
			dato = d;
			sig = s;
		}
	}

	Celda * primera;
	Celda * ultima;

	/**
	* @brief Método privado que realiza la copia de una cola en otra
	*
	* @param c Cola que va a ser copiada
	*
	**/

	void copiar(const Cola<T> &c);

	/**
	* @brief Método privado que borra una cola
	*
	**/

	void borrar();

public:

	/**
	* @brief Constructor vacío
	*
	**/
	
	Cola();

	/**
	* @brief Constructor de copia
	*
	* @param c Cola a ser copiada
	*
	**/

	Cola(const Cola<T> &c);

	/**
	* @brief Destructor
	*
	**/

	~Cola();

	/**
	* @brief Sobrecarga del operator =
	*
	* @param c Cola a la que se asigna
	*
	**/

	Cola<T> &operator=(const Cola<T> &c);

	/**
	* @brief Método que devuelve el elemento en el frente de la cola
	*
	* @return Elemento en el frente de la cola
	*
	**/

	T front() const;

	/**
	* @brief Método que borra el elemento al principio (frente) de la cola
	*
	**/

	void pop();

	/**
	* @brief Método que inserta un elemento al final de la cola
	*
	* @param c Elemento a insertar al final de la cola
	*
	**/

	void push(const T &c);

	/**
	* @brief Método que comprueba si una pila está o no vacía
	*
	* @return 'true' si la pila está vacía y 'false' en caso contrario
	* 
	**/

	bool empty() const;

};


#include "Cola_c.cpp"

#endif