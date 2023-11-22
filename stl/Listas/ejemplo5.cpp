//Crea una función que dadas dos listas de enteros devuelva una tercera con los elementos de ambas concatenadas

#include <list>
#include <iostream>

using namespace std;

list<int> concatena(list<int> &l1, list<int> &l2){
    list<int> output;
    output = l1;
    list<int>::iterator it = output.end();
    output.insert(it, l2.begin(), l2.end());

    return output;
}

int main() {
    list<int> l1, l2;
    int n1, n2;

    cout << "¿Qué tamaño tendrá la primera lista de enteros?: ";
    cin >> n1;

    for(int i = 0; i < n1; ++i){
        cout << "Introduzca el valor #" << i << ": ";
        int elem1;
        cin >> elem1;
        l1.push_back(elem1);
    }

    cout << endl << "¿Qué tamaño tendrá la segunda lista de enteros?: ";
    cin >> n2;

    for(int i = 0; i < n2; ++i){
        cout << "Introduzca el valor #" << i << ": ";
        int elem2;
        cin >> elem2;
        l2.push_back(elem2);
    }

    list<int> resultado = concatena(l1, l2);

    cout << endl << "La lista resultante tiene un tamaño de: " << resultado.size() << endl;

    cout << "Se muestra la lista resultante: ";

    for(int valores : resultado)
        cout << valores << ' ';

}