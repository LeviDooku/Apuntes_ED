//Crear una función que dada una lista de caracteres devuelva true si esta es palíndromo

#include <list>
#include <iostream>

using namespace std;

bool espalindromo(const list<char> &l){

    list<char>::const_iterator it = l.begin();
    list<char>::const_reverse_iterator rit = l.rbegin();

    while(it != l.end() && rit != l.rend()){
        if(*it != *rit){
            return false;
        }
        ++it; 
        ++rit;
    }
    return true;
}

int main() {

    list<char> frase;
    char d;

    cout << "Introduzca una frase: " << endl;

    while(true){
        d = std::cin.get();
        
        if (d == '\n') {
            break;
        } else {
            frase.push_back(d);
        }
    }

    frase.remove(' ');

    if(espalindromo(frase))
        cout << "La frase es un palíndromo" << endl;
    else
        cout << "La frase NO es un palíndromo" << endl;

}