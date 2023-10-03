/**
* @file alg_seleccion.cpp
*
**/

/**
* @brief Intercambia dos variables tipo entero
*
* @param a La primera variable a intercambiar
* @param a La segunda variable a intercambiar
**/

void Intercambia(int &a, int &b)
{
	int aux = a;
	a = b;
	b = aux;
}

/**
* @brief Ordena un vector de enteros 'v' con 'n' elementos, por medio del algoritmo de seleccion
*
* @param v Puntero a enteros que apunta a la primera posición del vector a ordenar
* @param n Número de elementos del vector
**/

void Ordena_Seleccion(int *v, int n)
{
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			if(*(v+min) > *(v+j))
				min = j;
		}
		Intercambia(*(v+i), *(v+min));
	}
}