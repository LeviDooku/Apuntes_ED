//Crear una lista y  listar sus elementos de distinta forma

#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> milista;

    for(int i = 0; i < 5; i++)
        milista.push_back(i);

    cout << "El contenido de la lista es: " << endl;

    list<int>::const_iterator it; 

    for(it = milista.begin(); it != milista.end(); ++it)
        cout << *it << endl;

    cout << "El contenido de la lista al revés es: " << endl;

    list<int>::const_reverse_iterator rit;

    for(rit = milista.rbegin(); rit != milista.rend(); ++rit)
        cout << *rit << endl;

    //Podríamos también usar el método reverse(), pero modificaríamos los elementos al cambiarlos de sentido

    cout << "El tamaño de la lista es: " << milista.size();

}