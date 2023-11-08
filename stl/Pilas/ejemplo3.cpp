//Ejemplo de programa de los apuntes

#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<string> ps1;
    stack<string> ps2;

    ps1.push("Primero");
    ps2.push("Segundo");

    ps1.swap(ps2);
    ps2.push("Tercero");

    cout << "En ps2 hay: " << ps2.size() << " elementos" << endl;
    cout << "Elementos en ps2: " << endl;

    while(!ps2.empty()){
        cout << ps2.top();
        ps2.pop();
    }
}