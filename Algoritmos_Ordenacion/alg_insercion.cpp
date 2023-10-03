/**
* @file alg_insercion.cpp
*
**/

/**
* @brief Ordena un vector de enteros 'v' con 'n' elementos, por medio del algoritmo de insercion
*
* @param v Puntero a enteros que apunta a la primera posición del vector a ordenar
* @param n Número de elementos del vector
**/

void Ordena_Insercion(int *v, int n)
{
	for(int i = 0; i < n; i++){
		int value = *(v + i);
		for(int j = i-1; j >= 0 && *(v + j) > value; j--){
			*(v + (j+1)) = *(v + j);
		}
		*(v + (j+1)) = value;
	}
}