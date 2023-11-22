//Ejemplo básico del uso de la clase queue

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<char> cola;
    char dato;

    cout << "Introduzca una frase: " << endl; 

    while((dato = cin.get()) != '\n'){
        cola.push(dato);
    }
    cout << "Frase introducida: " << endl;

    queue<char> aux;

    cola.swap(aux);

    while(!aux.empty()){
        cout << aux.front();
        aux.pop();
    }
}