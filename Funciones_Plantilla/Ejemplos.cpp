/**
* @file Ejemplos.cpp
*
**/

#include<iostream>
using namespace std;

//Funciones

/**
* @brief Intercambia dos variables tipo 'T', los parámetros se pasan por referencia, al ser una función plantilla
*
* @param a La primera variable a intercambiar
* @param a La segunda variable a intercambiar
*
* @tparam T El tipo de dato de las variables a intercambiar
**/

template <class T>

void Intercambia(T &a, T &b){

	T aux = a;
	a = b;
	b = aux;

}

/**
* @brief Imprime dos variables tipo 'T'
*
* @param a La primera variable a imprimir
* @param a La segunda variable a imprimir
*
* @tparam T El tipo de dato de las variables a imprimir
**/

template <class T>

void Imprimir(T &a, T &b){

	cout << a << ", " << b << endl;
}

/**
* @brief Ordena un vector de tipo 'T' mediante el algoritmo de Selección
*
* @param vector El vector a ordenar
* @param n El tamaño del vector
*
* @tparam T El tipo de dato de las variables a imprimir
**/

template <class T>

void Ordena_S(T * vector, int n){

	int minimo;

	for(int i = 0; i < n-1; i++){
		minimo = i;
		for(int j = i+1; j < n; j++){
            if (*(vector + j) < *(vector + minimo)) {
                minimo = j;
            }
		}
		Intercambia(*(vector + i), *(vector + minimo));
	}
}


int main(){

	const int n = 10;
	int v[n];

	cout << "Ingrese " << n << " números separados por espacios:" << std::endl;

	for(int i = 0; i < n; i++){
		cin >> *(v + i);
	}

	cout << "Vector desordenado: [ ";

	for(int i = 0; i < n; i++){
		cout << *(v + i) << ' ';
	}

	cout << ']';

	Ordena_S(v, n);

	cout << endl;

	cout << "Vector ordenado: [ ";

	for(int i = 0; i < n; i++){
		cout << *(v + i) << ' ';
	}

	cout << ']';

}







