#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> secuencia;

    for(int i = 1; i <= 5; i++)
        secuencia.insert(i*10);
    
    pair<set<int>::const_iterator, set<int>::const_iterator> ret;
    ret = secuencia.equal_range(30);

    cout << "Límite inferior: " << *(ret.first) << endl;
    cout << "Límite superior: " << *(ret.second) << endl;

    set<int>::const_iterator cit = secuencia.lower_bound(25);

    cout << endl << *cit << endl;

}