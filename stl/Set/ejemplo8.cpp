//Sobrecargar el operator + para hayar la intersección de dos conjuntos ordenados

#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

set<int> operator+(const set<int> &s1, const set<int> &s2){
    set<int> result;

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));

    return result;
}

int main(){

    set<int> s1, s2;

    int contador = 0;

    cout << "Ingrese cuántos datos desea insertar (primer conjunto): ";
    cin >> contador;

    //Entrada de datos e inserción en el conjunto set

    while(contador > 0){
        int valor;
        cout << "Ingrese valor entero ÚNICO  #" << s1.size() << ": ";
        cin >> valor;
        cout << endl;
        s1.insert(valor);
        contador--;
    }


    contador = 0;

    cout << "Ingrese cuántos datos desea insertar (segundo conjunto): ";
    cin >> contador;

    //Entrada de datos e inserción en el conjunto set

    while(contador > 0){
        int valor;
        cout << "Ingrese valor entero ÚNICO  #" << s2.size() << ": ";
        cin >> valor;
        cout << endl;
        s2.insert(valor);
        contador--;
    }

    cout << endl << "Se muestran los conjuntos: " << endl;

    for(const auto& elem : s1)
        cout << elem << " ";

    for(const auto& elem : s2)
        cout << elem << " ";

    set<int> intersec = s1 + s2;

    cout << endl << "Se muestran la intersección: " << endl;

    for(const auto& elem : intersec)
        cout << elem << " ";

}