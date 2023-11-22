#include <iostream>
#include <queue>
#include <list>
using namespace std;

// <FUNCIÓN A IMPLEMENTAR>
void transformacola (queue<int> & C){
	list<int> aux; //Uso una lista auxiliar para facilitar el trabajo de dar la vuelta a la cola y eliminación de repetidos
	
	//Copio el contenido de la cola en una lista auxiliar, para hacer el trabajo más fácil
	
	while(!C.empty()){
		aux.push_front(C.front()); //Al copiar en el front de la lista, se copia al revés directamente
		C.pop();
	} 
	
	aux.unique(); //Con unique() eliminamos los repetidos consecutivos
	
	//Copio el contenido de la lista en la cola, obteniendo el resultado requerido
	
	for(int valores : aux){
		C.push(valores);
	}
	
}


// Imprime todos los elementos de la cola
// El elemento del front es el primero (el de la izquierda)
void imprimecola(queue<int> c){
	if (c.empty())
		cout << "{}" << endl;

	else{
		cout << '{' << c.front();
		c.pop();

		while(!c.empty()){
			cout << ',' << c.front();
			c.pop();
		}

		cout << '}' << endl;
	}
}


// Simplemente comprueba que la solución para la cola "in1"
void test_sol(queue<int> in1, queue<int> sol){
	cout << "Entradas...."<<endl;
    imprimecola(in1);
    transformacola(in1);
    cout<<"Resultado obtenido ";
    imprimecola(in1);
    cout << "Solucion correcta?: " << (in1==sol ? "YES" : "NO") << endl;
}

int main(){
	queue<int> q1_in1({1,1,2,3,3,4,5,5,1,1,9,8,7,7,3});
	queue<int> q1_sol({3,7,8,9,1,5,4,3,2,1});
    test_sol(q1_in1, q1_sol);

	queue<int> q2_in1({1,1,1,1,3,3,3,3});
	queue<int> q2_sol({3,1});
    test_sol(q2_in1, q2_sol);



}
