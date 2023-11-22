//Cambiar el orden por defecto de como se agregan los elementos al set

#include <set>
#include <iostream>

using namespace std;

int main(){
    set<int, greater<int> > secuencia;
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

    cout << "Se muestran los valores de mayor a menor: " << endl;

    for(const auto& numeros : secuencia)
        cout << numeros << " ";
}
