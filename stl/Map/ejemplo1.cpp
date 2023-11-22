//Familiarizarnos con la clase map

#include <map>
#include <iostream>

using namespace std;

int main(){

    map<char, int> funcion;
    map<char, int>::const_iterator cit;

    funcion['k'] = 1; //Creamos la pareja <'k', 1>
    funcion['f'] = 2;

    for(const auto& x : funcion)
        cout << x.first << ", " << x.second << endl;

    //Imprimimos el mapa usando un iterador constante

    for(cit = funcion.begin(); cit != funcion.end(); ++cit)
        cout << cit -> first << ", " << cit -> second << endl;

    //Borrado de una llave (key)

    funcion.erase('k');
    cit = funcion.find('k');

    if(cit == funcion.end())
        cout << "La llave no existe (fue borrada)";

}