//Suponemos en este caso un array con N elementos de la siguiente forma:

//int *v; int n;

//Ordenamos este array usando el algoritmo de inserción

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