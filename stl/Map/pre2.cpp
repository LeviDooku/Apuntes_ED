//Crear una función que devuelva un mapa con clave string y lista asociada a partir de un multimap con varias claves

#include <map>
#include <list>
#include <iostream>

using namespace std;

map<string,list<int> > getMapa(const multimap<string,int> &multim){

    map<string, list<int> > output;

    auto it = multim.cbegin();

    while(it != multim.cend()){
        if(multim.count(it->first) > 1){
            output[it->first].push_back(it->second);
        }
        it++;
    }

    return output;
}

int main() {

    std::multimap<string, int> multim;

    multim.insert(make_pair("ahora", 1));
    multim.insert(make_pair("ahora", 3));
    multim.insert(make_pair("ahora", 4));
    multim.insert(make_pair("aunque", 3));
    multim.insert(make_pair("aunque", 5));
    multim.insert(make_pair("banco", 2));
    multim.insert(make_pair("banco", 10));
    multim.insert(make_pair("zanahoria", 1));
    multim.insert(make_pair("zanahoria", 2));

    map<string, list<int> > result = getMapa(multim);

    // Imprimir el resultado
    for (const auto& pair : result) {
        cout << pair.first << ": ";
        for (const auto& elem : pair.second) {
            cout << elem << " ";
        }
        cout << std::endl;
    }

    return 0;
}