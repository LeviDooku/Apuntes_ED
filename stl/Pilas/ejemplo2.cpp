//Programa que funciona de la misma forma que el de P_clase_vector/main.cpp, pero usando clase stack

//(Consultar detalles del funcionamiento en el archivo antes mencionado)

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> pila_char; //Pila de caracteres
    char dato;

    cout << "Inserte una frase: " << endl;

    while((dato = cin.get()) != '\n')
        pila_char.push(dato);

    cout << "Frase introducida antes del cambio: ";
    stack<char> aux;

    while(!pila_char.empty()){
        cout << pila_char.top();
        aux.push(pila_char.top());
        pila_char.pop();
    }

    cout << endl;
    cout << "Frase final: ";

    while(!aux.empty()){
        cout << aux.top();
        aux.pop();
    }
}
