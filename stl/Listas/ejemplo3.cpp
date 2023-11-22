//Prueba de assign, insert, swap, erase y clear

#include <list>
#include <iostream>
#include <vector>

using namespace std;

void mostrarlista(list<int> &l){
    for(int valores : l)
        cout << valores << ' ';
}

int main() {

    int miv[] = {1, 2, 34, 12};
    list<int> milista;
    milista.assign(miv, miv+4); //Copiamos el contenido de miv en milista
    //Si hacemos milista.assign(7, 100) generamos una lista con 7 números 100.

    cout << "Se muestra lista milista: " << endl;
    mostrarlista(milista);

    list<int> otra;
    otra.assign(milista.begin(), milista.end()); //Las dos listan tienen el mismo contenido

    cout << endl << "Se muestra lista otra: " << endl;
    mostrarlista(otra);  

    list<int> copiar;
    list<int>::iterator it;

    for(it = otra.begin(); it != otra.end(); ++it)
        copiar.push_back(*it);

    cout << endl << "Se muestra lista copiar: " << endl;
    mostrarlista(copiar);  

    it = copiar.begin();
    ++it;

    copiar.insert(it, 2, 30); //Se insertan 2 elementos con valor 30 en la posición del iterador "it"

    cout << endl << "Se muestra lista copiar: " << endl;
    mostrarlista(copiar);

    it = copiar.begin();
    copiar.insert(it, 4); //Se inserta un elemento de valor 4 en la posición del iterador "it"

    cout << endl << "Se muestra lista copiar: " << endl;
    mostrarlista(copiar);

    it = milista.begin();
    vector<int> v;

    v.assign(copiar.begin(), copiar.end()); //El vector contiene los mismos valores que la lista copiar
    milista.insert(it, v.begin(), v.end()); //Ahora milista es v + milista

    cout << endl << "Se muestra lista milista: " << endl;
    mostrarlista(milista); 

    milista.erase(milista.begin());

    cout << endl << "Se muestra lista milista: " << endl;
    mostrarlista(milista); 

    milista.swap(copiar); //Se copia el contenido de copiar en milista

    cout << endl << "Se muestra lista milista: " << endl;
    mostrarlista(milista); 

    milista.clear();
    copiar.clear();
    v.clear();
}