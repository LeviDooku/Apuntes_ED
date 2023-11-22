//Eliminación de repetidos en una secuencia, se ordenan de forma ascendente por defecto

#include <set>
#include <iostream>

using namespace std;

int main(){
    set<int> secuencia; //Creación de una secuencia de enteros

    //Inserción de elementos

    secuencia.insert(10);
    secuencia.insert(5);
    secuencia.insert(123);
    secuencia.insert(5); //No se agrega, ya que ya fue insertado

    //Mostrar la secuencia por pantalla

    cout << "Secuencia de enteros: " << endl;

    for(const auto& numeros : secuencia)
        cout << numeros << " ";

    secuencia.clear();

    //Imprimir usando iteradores

    cout << endl << "Secuencia de caracteres: " << endl;

    set<char> datos;
    set<char>::const_iterator cit;

    datos.insert('h');
    datos.insert('o');
    datos.insert('l');
    datos.insert('a');
    datos.insert('a');

    for(cit = datos.begin(); cit != datos.end(); ++cit)
        cout << *cit << " ";

    datos.clear();

}