//Dado un multiset, obtener map de clave enteros y valor asociado del número de veces que se repite esa clave en el multiset

#include <map>
#include <set>
#include <iostream>

using namespace std;

map<int, int> getFrecuencia(const multiset<int> &ms){
    map<int, int> output;

    typedef multiset<int>::const_iterator iteratorMs;

    pair<iteratorMs, iteratorMs> ret;
    iteratorMs it = ms.cbegin();

    int cnt = 0;

    while(it != ms.cend()){
        ret = ms.equal_range(*it); //Primer iterador a la primera aparición de *it y segundo donde termina
        cnt = 0;
        for(auto it_2 = ret.first; it_2 != ret.second; ++it_2)
            cnt++;
        output[*it] = cnt;
        it = ret.second;
    }
    return output;
}

int main(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    ms.insert(2);
    ms.insert(2);

    ms.insert(6);
    ms.insert(6);
    ms.insert(6);

    cout << "Se muestra el multiset: " << endl;

    for(const auto& elem : ms)
        cout << elem << " ";

    map<int, int> result = getFrecuencia(ms);

    cout << "Se muestra el mapa resultante: " << endl;

    for(const auto& pair : result)
        cout << pair.first << ", " << pair.second << endl;
}