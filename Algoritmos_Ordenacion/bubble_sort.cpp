/**
* @file bubble_sort.cpp
*
**/


/**
* @brief Intercambia dos variables tipo entero
*
* @param a La primera variable a intercambiar
* @param a La segunda variable a intercambiar
**/

void Intercambia(int &a, int &b) {
        int aux = a;
        a = b;
        b = aux;
}

/**
* @brief Ordena un vector de enteros 'v' con 'n' elementos, por medio del algoritmo de burbuja
*
* @param v Puntero a enteros que apunta a la primera posición del vector a ordenar
* @param n Número de elementos del vector
**/

void Bubble_sort(int *v, int n) {
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(*(v + j) > *(v + (j + 1))){
				Intercambia(*(v + j), *(v + (j + 1));
			}
		}
	}
}