/*
Dada una cola de enteros implementar una función

void transformarcola(queue<int> & c);

que transforme una cola c en otra en la que se eliminen aquellos valores (números) pares que
aparezcan repetidos y de manera consecutiva en la cola. Se permite el uso de colas (queue)
auxiliares, si fuera necesario.

Ejemplo:
C=<1,2,2,3,3,4,5,5,1,1,9,8,8,8,3> pasaría a quedar como C=<1,2,3,3,4,5,5,1,1,9,8,3>
*/

#include<iostream>
#include<queue>
#include<list>

using namespace std;

void transformacola(queue<int> &c){
    int aux;

    for(int i = 0; i < c.size(); i++){
        int aux = c.front();

        c.push(aux);
        c.pop();

        while((aux%2 == 0) && c.front() == aux)
            c.pop();
    }
}

void transformacolaV2(queue<int> &c){
    list<int> aux;

    while(!c.empty()){
        int elem = c.front();
        aux.push_back(c.front());
        c.pop();
    }

    list<int>::iterator it;

    for(it = aux.begin(); it != aux.end(); ++it){
        if((*it%2 == 0) && (*next(it) == *it))
           it = aux.erase(it);        
    }

    list<int>::const_iterator cit;

    for(cit = aux.begin(); cit != aux.end(); ++cit){
        c.push(*cit);
    }
}

int main() {

    queue<int> cola;
    queue<int> cola_trans;

    cola.push(1); 
    cola.push(2); 
    cola.push(2); 
    cola.push(3); 
    cola.push(3); 
    cola.push(4); 
    cola.push(5); 
    cola.push(5); 
    cola.push(1); 
    cola.push(1);
    cola.push(9); 
    cola.push(9); 
    cola.push(8); 
    cola.push(8); 
    cola.push(8); 
    cola.push(3);

    cout << endl << "Cola después de ser transformada: " << endl;

    transformacolaV2(cola);

    while(!cola.empty()){
        cout << cola.front();
        cola.pop();
    }
}
