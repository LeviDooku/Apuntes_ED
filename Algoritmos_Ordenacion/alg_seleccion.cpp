//Suponemos en este caso un array con N elementos de la siguiente forma:

//int *v; int n;

void Intercambia(int &a, int &b)
{
	int aux = a;
	a = b;
	b = aux;
}

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