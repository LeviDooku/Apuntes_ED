//Ejemplo de un programa sencillo usando la clase "priority_queue" de la STL

#include<queue>
#include<iostream>

int main(){

	std::priority_queue<int> mipq;
	std::priority_queue<int> otra;
	const int n_elementos = 5;

	for(int i = 0; i < n_elementos; i++){
		int elem = 0;
		std::cout << "Ingrese un valor entero: ";
		std::cin >> elem;
		mipq.push(elem);
	}

	std::cout << "El valor introducido más grande es el: " << mipq.top() << std::endl;

	otra = mipq;

	while(!otra.empty()){
		std::cout << otra.top() << std::endl;
		otra.pop();
	}

}