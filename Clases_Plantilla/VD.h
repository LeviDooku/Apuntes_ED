/**
* @file VD.h
*
**/

#ifndef VD
#define VD

//VD = Vector Dinámico

class VD{

private: 

	T * datos;
	int n; //número de elementos del vector dinámico
	int reservados; //número de espacios disponibles

	/**
	* @brief Método privado que cambia el tamaño del vector dinámico
	*
	* @param nuevo_tam Nuevo tamaño que tendrá el vector dinámico
	**/

	void Resize(int nuevo_tam);

public: 

	/**
	* @brief Constructor que genera un vector dinámico de tamaño 'tam', por defecto a 0. Por tanto actúa como constructor vacío
	*
	* @param tam Tamaño que tendrá el vector dinámico, si no se especifica, 'tam' = 0
	*
	**/

	VD(int tam = 0);

	/**
	* @brief Constructor de copia, genera un VD a partir de 'otro'
	*
	* @param VD<T> Vector resultante de la copia
	* @param otro Vector origen
	*
	**/

	VD(const VD<T>, &otro);

	/**
	* @brief Destructor
	*
	**/	

	~VD();

	/**
	* @brief Sobrecarga del operator =
	*
	* @param otro Vector dinámico
	*
	**/ 

	VD & operator=(const VD<T> &otro);

	/**
	* @brief Inserta un elemento 'nuevo' de tipo 'T' en la posición 'pos'
	*
	* @param pos Posición en la que se insertará el nuevo elemento
	* @param nuevo Elemento a insertar
	*
	**/ 

	void Insertar(int pos, const T & nuevo);

	/**
	* @brief Sobrecarga del operator '[]'
	*
	* @param i Entero a asignar
	*
	**/ 

	T & operator[](int i);

	/**
	* @brief Sobrecarga del operator '[]'
	*
	* @param i Entero a asignar
	*
	**/ 	

	const T & operator[](int i) const

 	/**
	* @brief Método que devuelve el tamaño del vector dinámico
	*
	* @return El tamaño del vector dinámico
	*
 	**/

 	int size () const;
}

#include "VD.cpp"

#endif