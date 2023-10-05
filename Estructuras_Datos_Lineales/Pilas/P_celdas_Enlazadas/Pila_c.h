/**
* @file Pila_c.h
*
**/

//Como aún no controlo del todo las celdas enlazadas, haremos una pila de caracteres

struct Celda
{
	char d; 
	Celda * sig;
};

class Pila{

private: 

	Celda * primera;

	/**
	* @brief Método privado que copia el contenido de una pila en otra
	*
	* @param P La pila a ser copiada
	*
	**/

	void copiar(const Pila &P);

	/**
	* @brief Método privado para borrar una pila
	*
	**/
	
	void borrar();

public:

	/**
	* @brief Constructor vacío
	*
	**/

	Pila();

	/**
	* @brief Constructor de copia
	*
	* @param P La pila a ser copiada
	*
	**/

	Pila(const Pila &P);

	/**
	* @brief Destructor
	*
	**/

	~Pila();

	/**
	* @brief Sobrecarga del operator =
	*
	**/

	Pila & operator=(const Pila &P);

	/**
	* @breif Método que comprueba si la pila está o no vacía
	*
	* @return "true" si está vacía, "false" en caso contrario
	*
	**/

	bool empty() const;

	/**
	* @brief Método que devuelve el elemento en el tope de la pila
	*
	* @return El elemento en el tope de la pila
	*
	**/

	char top() const;

	/**
	* @breif Método que inserta un elemento al prinicipio de la pila
	*
	* @param c El elemento a insertar en la pila 
	*
	**/

	void push(char c);

	/**
	* @breif Método que borra el elemento en el tope de la pila
	*
	**/

	void pop();

	/**
	* @breif Método que devuelve el número de elementos de la pila
	*
	* @return El tamaño (número de elementos) de la pila
	*
	**/

	int size() const;

}