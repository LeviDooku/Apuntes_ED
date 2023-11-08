//Ejemplo de programa presente en los apuntes

#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<string> ps1; //Creación de dos pilas
    stack<string> ps2;

    ps1.push("Primero"); //Agregamos por el tope
    ps2.push("Segundo");

    ps1.swap(ps2); //Copiamos el contenido de ps2 en ps1
    ps2.push("Tercero");

    cout << "En ps2 hay: " << ps2.size() << " elementos" << endl; //Imprime el tamaño de ps2
    cout << "Elementos en ps2: " << endl;

    //Imprime todos lo elementos de ps2
    
    while(!ps2.empty()){
        cout << ps2.top();
        ps2.pop();
    }
}