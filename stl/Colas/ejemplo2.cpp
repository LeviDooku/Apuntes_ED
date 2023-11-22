//Ejemplo de uso de una cola que aparece en los apuntes

#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct frutas{
    int indice;
    string fruta;

    friend ostream& operator<<(ostream& os, const frutas& f) {
        os << "Índice: " << f.indice << ", Fruta: " << f.fruta;
        return os;
    }
};

int main() {
    queue<frutas> cola;

    int cont = 0;
    int max;

    cout << "Selecciones cuántos elementos desea que tenga la cola: " << endl;
    cin >> max;

    string nombre;
    frutas f;
    
    do{
        cout << "Ingrese la fruta #" << cont << ": ";
        getline(cin, nombre);
        f.indice = cont;
        f.fruta = nombre;
        cola.push(f);
        cont++;
    }while(cont < max);

    cout << "Cola final: " << endl;

    while(!cola.empty()){
        cout << cola.front() << endl;
        cola.pop();
    }
}