/**
* @file Cola_cir_tem.h
*
**/

//Haremos una clase plantilla que implemente una cola como vector circular

#ifndef COLA
#define COLA

template <class T>

class Cola{

private:

	//Atributos privados

	T * datos;
	int capacidad; //Reservados
	int n; //Elementos almacenados
	int primera, ultima;

	//Métodos privados

	void resize(int n_tam);
	void copiar(const Cola<T> &c);

public:

	/**
	* @brief Constructor con parámetros por defecto
	*
	* @param tam Parámetro por defecto. Si no se especifica, su valor será: 10.
	*
	**/

	Cola(int tam = 10);

	/**
	* @brief Constructor de copia
	*
	* @param c Cola a ser copiada.
	*
	**/

	Cola(const Cola<T> &c);

	/**
	* @brief Destructor
	*
	**/

	~Cola();

	/**
	* @brief Sobrecarga del operator de asignación
	*
	**/

	Cola<T> &operator =(const Cola<T> &c);

	/**
	* @brief Método que devuelve el tamaño de la cola (número de elementos en ella)
	*
	* @return Número de elementos de la cola
	*
	**/

	int size() const;

	/**
	* @brief Método que comprueba si la cola está o no vacía
	*
	* @return True si la cola está vacía, false en caso contrario
	**/

	bool empty() const;

	/**
	* @brief Método que comprueba si la cola está o no llena
	*
	* @return True si la cola está llena, false en caso contrario
	**/

	bool full() const;

	/**
	* @brief Método que devuelve el frente de la cola
	*
	* @return True si la cola está vacía, false en caso contrario
	**/

	T front() const;

	/**
	* @brief Método que inserta un elemento al final de la cola
	*
	* @param dato Dato a insertar en la cola
	**/

	void push(T &dato);

	/**
	* @brief Método que elimina el elemento al frente de la cola
	*
	**/

	void pop();

};

#include "Cola_cir_tem.cpp"
#endif COLA
