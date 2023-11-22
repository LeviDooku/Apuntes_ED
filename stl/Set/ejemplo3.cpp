//Crear secuencias con set y multiset y darse cuenta de sus diferencias

#include <set>
#include <iostream>

using namespace std;

int main(){

    multiset<int> secuencia;
    set<int> unique_secuencia;

    multiset<int>::const_iterator cit_m;
    set<int>::const_iterator cit_s;

    int contador = 0;

    cout << "Ingrese cuántos datos desea insertar: ";
    cin >> contador;

    //Entrada de datos e inserción en el conjunto set

    while(contador > 0){
        int valor;
        cout << "Ingrese valor entero  #" << secuencia.size() << ": ";
        cin >> valor;
        cout << endl;
        secuencia.insert(valor);
        contador--;
    }

    //Se muestra la secuencia ingresada

    cout << "Secuencia de enteros ingresada:" << endl;

    for(cit_m = secuencia.begin(); ccit_m != secuencia.end(); ++cit_m){
        cout << *cit_m << " ";
        unique_secuencia.insert(*cit_m); //Se pasan los valores a la secuencia sin repetición (set)
    }

    //Se muestra la secuencia sin repetidos

    cout << endl << "Se procede ahora a mostrar la lista sin repetidos: " << endl;

    for(cit_s = unique_secuencia.begin(); cit_s != unique_secuencia.end(); ++cit_s)
        cout << *cit_s << " ";

    cout << endl << "Habían: " << secuencia.size() - unique_secuencia.size() << " elementos repetidos" << endl;

    secuencia.clear();
    unique_secuencia.clear();
}