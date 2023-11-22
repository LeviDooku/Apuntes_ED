//Se dispone de una secuencia de enteros almacenados en una cola y se desea comprobar si dicha secuencia en orden
//inverso coincide con alguna subsecuencia de elementos de una pila P. Usando solamente los TDA Pila y Cola, diseñar
//una función

using namespace std;

#include <iostream>
#include <stack>
#include <queue>

//Está mal

bool condicion(std::stack<int> &P, std::queue<int> &Q) {
    std::stack<int> aux;  // Pila auxiliar para almacenar elementos temporales

    while (!Q.empty()) {
        int elementoCola = Q.front();
        Q.pop();

        // Buscar el elemento en la pila P
        while (!P.empty()) {
            int elementoPila = P.top();
            P.pop();

            if (elementoCola == elementoPila) {
                // Coincidencia encontrada, almacenar elementos en la pila auxiliar
                while (!aux.empty()) {
                    P.push(aux.top());
                    aux.pop();
                }
                break;
            } else {
                // Almacenar elementos en la pila auxiliar temporalmente
                aux.push(elementoPila);
            }
        }
        // Si no se encontró coincidencia en P, la condición no se cumple
        if (P.empty()) {
            return false;
        }
    }
    return true;  // Se encontraron coincidencias para todos los elementos de Q en P
}

int main(){
     
    stack<int> P;
    queue<int> Q;
    stack<int> aux;

    Q.push(5);
    Q.push(8);
    Q.push(3);

    P.push(5);
    P.push(8);
    P.push(3);
    P.push(2);
    P.push(4);

    if(condicion(P, Q) == true)
        cout << "Correcto";
    else    
        cout << "Nop";
}

