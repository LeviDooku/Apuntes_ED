//Dados dos set construir una función que determine que dos conjuntos son complementarios
//Diremos que son complementarios si entre dos elementos del primer conjunto existe uno y solo uno del segundo
//s1={1,5,7} s2={2,6} --> devolveria true

#include <set>
#include <iostream>

using namespace std;

bool soncomplementarios(const set<int> &s1, const set<int> &s2){

	if(s2.size() != s1.size()-1)
        return false;

    set<int>::const_iterator cit_1, cit_2, cit_sig, final;

    cit_1 = s1.cbegin();
    cit_2 = s2.cbegin();
    final = s1.cend();
    final--;

    while(cit_1 != final){
        cit_sig = cit_1;
        cit_sig++;

        if(!(*cit_1 <= *cit_2 && *cit_2 < *cit_sig))
            return false;
        
        cit_1++;
        cit_2++;

    }

    return true;
}

int main(){

    set<int> s1, s2;

    s1.insert(1);
    s1.insert(5);
    s1.insert(7);

    s2.insert(2);
    s2.insert(6);

    for(const auto& elem : s1)
        cout << elem << " ";

    cout << endl;

    for(const auto& elem : s2)
        cout << elem << " ";

    cout << endl;

    if(soncomplementarios(s1, s2))
        cout << "Los conjuntos son complementarios";
    else 
        cout << "No lo son";
}