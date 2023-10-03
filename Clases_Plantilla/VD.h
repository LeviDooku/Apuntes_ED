/**
* @file VD.h
*
**/

//VD = Vector Dinámico

class VD{

private: 

	T * datos;
	int n; //número de elementos del vector dinámico
	int reservados; //número de espacios disponibles

	/**
	* @brief Método privado que cambia el tamaño del vector dinámico
	*
	* @param nuevo_tam Nuevo tamaño que tendrá el vector dinámico
	**/

	void Resize(int nuevo_tam);

public: 

	/**
	* @brief Constructor que genera un vector dinámico de tamaño 'tam', por defecto a 0. Por tanto actúa como constructor vacío
	*
	* @param tam Tamaño que tendrá el vector dinámico, si no se especifica, 'tam' = 0
	**/

	VD(int tam = 0);

	/**
	* @brief Constructor de copia, genera un VD a partir de 'otro'
	*
	* @param VD<T> Vector resultante de la copia
	* @param otro Vector origen
	*
	**/

	VD(const VD<T>, &otro);

}