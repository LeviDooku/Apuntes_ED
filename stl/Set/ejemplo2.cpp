//Usar método find sobre un conjunto set

#include <set>
#include <iostream>

using namespace std;

int main(){
    set<int> secuencia;
    set<int>::const_iterator cit;

    int contador = 0;

    cout << "Ingrese cuántos datos desea insertar: ";
    cin >> contador;

    //Entrada de datos e inserción en el conjunto set

    while(contador > 0){
        int valor;
        cout << "Ingrese valor entero ÚNICO  #" << secuencia.size() << ": ";
        cin >> valor;
        cout << endl;
        secuencia.insert(valor);
        contador--;
    }

    //Se muestra la secuencia ingresada

    cout << "Secuencia de enteros ingresada:" << endl;

    for(cit = secuencia.begin(); cit != secuencia.end(); ++cit)
        cout << *cit << " ";

    //Se usa el find() para comprobar la existencia de un elemento ingresado por el usuario

    int a_buscar;
    cout << endl << "Ingrese ahora el valor que desea buscar en la secuencia: ";
    cin >> a_buscar;

    cit = secuencia.find(a_buscar);

    if(cit == secuencia.end())
        cout << "El valor: " << a_buscar << " no se encuentra en la secuencia";
    else
        cout << "El valor: " << a_buscar << " se encuentra en la posición: " << distance(secuencia.begin(), cit);
    
    while(!secuencia.empty())
        secuencia.erase(secuencia.begin()); //También vale secuencia.clear()
}