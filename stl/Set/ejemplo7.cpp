//Suponer que tenemos una cola de conjuntos de enteros. Obtener el conjunto que es la unión de todos los conjuntos
//de la cola.

#include <set>
#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<set<int> > conjuntoSet; 
    multiset<int> result;
    set<int> c1, c2, c3;

    c1.insert(1);
    c1.insert(2);
    c1.insert(3);
    c1.insert(4);

    c2.insert(1);
    c2.insert(8);

    c3.insert(1);
    c3.insert(1);
    c3.insert(1);
    c3.insert(1);

    conjuntoSet.push(c1);
    conjuntoSet.push(c2);
    conjuntoSet.push(c3);

    while(!conjuntoSet.empty()){
        cout << endl << "Agregando al multiset el conjunto: ";
        for(const auto& elem : conjuntoSet.front()){
            cout << elem << " ";
            result.insert(elem);
        }
        conjuntoSet.pop();
    }

    cout << "Se muestra ahora el conjunto resultado de la unión: ";

    for(const auto& numero : result)
        cout << numero << " ";


}