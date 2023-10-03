//Suponemos en este caso un array con N elementos de la siguiente forma:

//int *v; int n;

void Intercambia(int &a, int &b) {
        int aux = a;
        a = b;
        b = aux;
}

//Ordenamos este array usando el algoritmo de burbuja

void Bubble_sort(int *v, int n) {
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(*(v + j) > *(v + (j + 1))){
				Intercambia(*(v + j), *(v + (j + 1));
			}
		}
	}
}