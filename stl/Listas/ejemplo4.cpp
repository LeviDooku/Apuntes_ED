//Crear una función que dada una lista de enteros, elimine los pares

#include <list>
#include <iostream>

using namespace std;

void eliminapares(list<int> &l){
    for(auto it = l.begin(); it != l.end(); ++it){
        if((*it)%2 == 0){
            l.erase(it);
        }
    }
}

int main() {
    list<int> l;
    int n;
    int cont = 0;

    cout << "¿Qué tamaño tendrá la lista de enteros?: ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        cout << "Introduzca el valor #" << i << ": ";
        int elem;
        cin >> elem;
        l.push_back(elem);
    }

    cout << endl << "La lista introducida es: ";

    for(int valores : l)
        cout << valores << ' ';

    for(auto it = l.begin(); it != l.end(); ++it){
        if((*it)%2 == 0)
            cont++;
    }

    cout << endl << "Se han encontrado: " << cont << " números pares" << endl;

    eliminapares(l);

    cout << "Se muestra la lista sin pares: ";

    for(int valores : l)
        cout << valores << ' ';
}