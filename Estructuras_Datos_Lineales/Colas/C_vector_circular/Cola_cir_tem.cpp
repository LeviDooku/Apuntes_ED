/**
* @file Cola_cir_tem.cpp
*
**/

template <class T>

void Cola<T>::resize(int n_tam){
	T * aux = new T[n_tam];
	int minimo = (n < n_tam)? n:n_tam;

	for(int i = 0; i < minimo; i++){
		aux[i] = datos[(primera + i) % capacidad];
	}

	primera = 0; 
	ultima = minimo;
	n = minimo;
	capacidad = n_tam;
	delete [] datos;
	datos = aux;
}

template <class T>

void Cola<T>::copiar(const Cola<T> &c){
	capacidad = c.capacidad;
	primera = c.primera;
	ultima = c.ultima;
	n = c.n;
	datos = new T[capacidad];

	for(int i = 0; i < n; i++){
		datos[(primera + i) % capacidad] = c.datos[(primera + i) % capacidad];
	}
}

template <class T>

Cola<T>::Cola(int tam){
	capacidad = tam;
	primera = 0;
	ultima = 0;
	n = 0;
	datos = new T[capacidad];
}

template <class T>

Cola<T>::Cola(const Cola<T> &c){
	copiar(c);
}

template <class T>

Cola<T>::~Cola(){
	if(datos != nullptr){
		delete [] datos;
	}
}

template <class T>

Cola<T> &Cola<T>::operator =(const Cola<T> &c){
	if (this != &c){
		if(datos != nullptr){
			delete [] datos;
			copiar(c);
		}
	}
	return * this;
}

template <class T>

int Cola<T>::size() const{
	return n;
}

template <class T>

bool Cola<T>::empty() const{
	return n == 0;
}

template <class T>

bool Cola<T>::full() const{
	return n == capacidad;
}

template <class T>

T Cola<T>::front() const{
	assert(n > 0);
	return datos[primera];
}

template <class T>

void Cola<T>::push(T &dato){
	if(n == capacidad) //full() ??
		resize(2 * capacidad);
	datos[ultima] = dato;
	ultima = (ultima + 1) % capacidad;
	n++;
}

template <class T>

//No entiendo muy bien

void Cola<T>::pop(){
	assert(n != 0);
	primera = (primera + 1) % capacidad;
	n--;
	if(n <= capacidad)
		resize(capacidad / 2);
}