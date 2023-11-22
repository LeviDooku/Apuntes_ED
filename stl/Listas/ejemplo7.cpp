//Dadas dos listas de enteros, mover los números pares a otra lista. Quedando una lista de pares y otra de 
//impares

#include <list>
#include <iostream>

using namespace std;

int main() {
    list<int> l1, l2;
    int n; 

    cout << "¿Cuántos elementos tendrá la lista de enteros?: ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        cout << "Introduzca el elemento #" << i << ": ";
        int elem; 
        cin >> elem;
        l1.push_back(elem);
    }

    cout << "La lista introducida es: ";
    
    for(auto it = l1.begin(); it != l1.end(); ++it)
        cout << *it << ' ';

    auto it = l1.begin();

    while(it != l1.end()){
        if((*it)%2 == 0){
            l2.push_back(*it);
            it = l1.erase(it);
        }
        else{
            ++it;
        }
    }

    /*
    Otra forma de hacerlo:
    
    for(auto it = l1.begin(); it != l1.end(); ++it){
        if((*it)%2 == 0){
            l1.push_back(*it);
            l1.erase(it);
        }
    }*/

    cout << endl << "Lista impares: ";
    
    for(auto it = l1.begin(); it != l1.end(); ++it)
        cout << *it << ' ';

    cout << endl << "Lista pares: ";
    
    for(auto it = l2.begin(); it != l2.end(); ++it)
        cout << *it << ' ';
}