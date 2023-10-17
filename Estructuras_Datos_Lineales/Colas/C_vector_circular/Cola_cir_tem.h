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
	* @brief Constructor de copia
	*
	* @param c Cola a ser copiada. Es pasada por referencia.
	**/

	bool empty() const;
	bool full() const;
	T front() const;
	void push(T &dato);
	void pop();

};

#include "Cola_cir_tem.cpp"
#endif COLA
