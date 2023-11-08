//Ejemplo de programa para familiarizarse con la clase vector

/*
Métodos usados:

push_back(): agregar un elemento
back(): mostrar el elemento del final
size(): tamaño del vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> stack;
    int n;

    cout << "Introduzca un entero: " << endl;
    cin >> n; 

    stack.push_back(n);

    cout << "El valor introducido es el: " << stack.back() << endl;
    cout << "La pila tiene: " << stack.size() << " elementos" << endl;

    stack.pop_back();

    cout << "La pila tiene: " << stack.size() << " elementos" << endl;
}