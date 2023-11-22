//Dados dos conjuntos crear una función para obtener un nuevo conjunto que sea la intersección.

#include <set>
#include <iostream>

using namespace std;

set<int> interseccion(set<int> &s1, set<int> &s2){
    set<int> aux;
    
    for(const auto& numeros : s1)
        aux.insert(numeros);
    
    for(const auto& numeros : s2)
        aux.insert(numeros);

    s1.clear();
    s2.clear();

    return aux;
}

int main(){

    set<int> secuencia1, secuencia2;
    //set<int>::const_iterator cit1, cit2;

    int contador = 0;

    cout << "Ingrese cuántos datos desea insertar (secuencia 1): ";
    cin >> contador;

    //Entrada de datos e inserción en el conjunto set

    while(contador > 0){
        int valor;
        cout << "Ingrese valor entero ÚNICO  #" << secuencia1.size() << ": ";
        cin >> valor;
        cout << endl;
        secuencia1.insert(valor);
        contador--;
    }

    cout << "Se muestra la secuencia 1: ";

    for(const auto& numeros : secuencia1)
        cout << numeros << " ";

    contador = 0;

    cout << endl << "Ingrese cuántos datos desea insertar (secuencia 2): ";
    cin >> contador;

    //Entrada de datos e inserción en el conjunto set

    while(contador > 0){
        int valor;
        cout << "Ingrese valor entero ÚNICO  #" << secuencia2.size() << ": ";
        cin >> valor;
        cout << endl;
        secuencia2.insert(valor);
        contador--;
    }

    cout << endl << "Se muestra la secuencia 2: ";

    for(const auto& numeros : secuencia2)
        cout << numeros << " ";

    set<int> resultado = interseccion(secuencia1, secuencia2);

    cout << endl << "Se muestra la interseccion: ";

    for(const auto& numeros : resultado)
        cout << numeros << " ";

    cout << endl << "Tamaño de la intersección: " << resultado.size();
}