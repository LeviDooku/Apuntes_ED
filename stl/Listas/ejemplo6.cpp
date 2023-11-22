//Splice: mover los elementos de una lista a otra

#include <list>
#include <iostream>

using namespace std;

int main() {

    list<int> l1, l2;
    list<int>::iterator it; 

    for(int i = 0; i < 5; ++i)
        l1.push_back(i);

    for(int i = 0; i < 4; ++i)
        l2.push_back(i*10);

    cout << "Se muestra la lista l1: " << endl;

    for(int valores : l1)
        cout << valores << ' ';

    cout << endl << "Se muestra la lista l2: " << endl;

    for(int valores : l2)
        cout << valores << ' ';

    it = l1.begin();
    l1.splice(it, l2);

    cout << endl << "Se muestra la lista l1: " << endl;

    for(int valores : l1)
        cout << valores << ' ';

    l2.splice(l2.begin(), l1, it);

    cout << endl << "Se muestra la lista l2: " << endl;

    for(int valores : l2)
        cout << valores << ' ';

    it = l1.begin();

    advance(it, 3);   

    cout << endl << "Se muestra la lista l1: " << endl;

    for(int valores : l1)
        cout << valores << ' ';
}