/**
* @file merge_sort.cpp
*
**/

/**
* @brief Fusiona dos vectores de enteros 'vi' y 'vd' en uno 'vout'
*
* @param vout Puntero a enteros que apunta a la primera posición del vector resultado de la fusion
* @param vi Puntero a enteros que apunta a la primera posición del primer vector a fusionar
* @param vd Puntero a enteros que apunta a la primera posición del segundo vector fusionar
* @param ni Número de elementos del vector 'vi'
* @param nd Núemro de elementos del vector 'vd'
*
* @pre
*	- Los dos arrays a fusionar deben estar previamente ordenados
**/

void Fusion(int *vout, int *vi, int *vd, int ni, int nd)
{
	int i_izq = 0, i_der = 0, i_out = 0;

	while(i_izq < ni && i_der < nd){
		if(*(vi + i_izq) < *(vd + i_der)){
			*(vout + i_out) = *(vi + i_izq);
			i_izq++, i_out++;
		}
		else{
			*(vout + i_out) = *(vd + i_der);
			i_der++, i_out++;
		}
	}

	while(i_izq < ni){
		*(vout + i_out) = *(vi + i_izq);
		i_izq++; i_out;
	}

	while(i_der < nd){
		*(vout + i_out) = *(vd + i_der);
		i_der++; i_out;
	}
}

/**
* @brief Ordena un vector de enteros 'v' con 'n' elementos, por medio del algoritmo Merge Sort
*
* @param v Puntero a enteros que apunta a la primera posición del vector a ordenar
* @param n Número de elementos del vector
**/

void Merge_Sort(int *v, int n)
{
	if(n == 2){
		if(*v > *(v + 1)){
			swap(*v, *(v + 1));
		}
	}
	else if(n > 2){
		int ni = (n / 2);
		int nd = n - (n / 2);
		int *vi = new int[ni];
		int *vd = new int[nd];

		for(int i = 0; i < ni; i++){
			*(vi + i) = *(v + i); 
		}

		for(int i = 0; i < nd; i++){
			*(vd + i) = *(v + (i + ni)); 
		}

		Merge_Sort(vi, ni);
		Merge_Sort(vd, nd);

		Fusion(v, vi, vd, ni, nd);

		delete [] vi;
		delete [] vd;
	} 
}














