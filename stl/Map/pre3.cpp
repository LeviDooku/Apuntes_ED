#include <map>
#include <set>
#include <iostream>

using namespace std;

int cuentavocales(const string &s){
    set<char> vocales;
    vocales.insert('a');
    vocales.insert('e');
    vocales.insert('i');
    vocales.insert('o');
    vocales.insert('u');

    int cnt = 0;
    for(int i = 0; i < s.length(); ++i){
        if(vocales.find(s[i]) != vocales.end())
            cnt++;
    }
    return cnt;
}

map<string, int> getNumVocales(const set<string>&s){

    map<string, int> output;

    for(auto it  = s.cbegin(); it != s.cend(); ++it){
        output[*it] = cuentavocales(*it);
    }

    return output;
}

int main(){

    set<string> s;

    s.insert("aguila");
    s.insert("alondra");
    s.insert("buho");
    s.insert("buiter");
    s.insert("canario");
    s.insert("gavilan");
    s.insert("gaviota");
    s.insert("halcon");

    cout << "Colección de strings: " << endl;

    for(const auto& palabras : s)
        cout << palabras << ", ";

    map<string, int> result = getNumVocales(s);

    cout << endl << "Colección de strings con el número de vocales: " << endl;

    for(const auto& pair : result){
        cout << pair.first << ", " << pair.second << endl;
    }


}