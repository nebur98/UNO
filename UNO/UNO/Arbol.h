#pragma once

/*

** Autor: Rubén Pereira Ugalde
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificación:
		Clase necesaria para simular una pequeña inteligencia
		en la clase jugador, respectivamente el que no manipula
		el usuario, sino el computador. (Inteligencia Artificial).

*/

template <class A>
class cnodo {
public:
	cnodo() { izq = der = 0; }
	cnodo(A elemento) {
		datos = elemento;
		izq = der = NULL;
	}
	A  & get_datos() { return datos; }

private:
	A datos;
	cnodo * izq;
	cnodo * der;
};

template <class A>
class carbol_binario {
public:
	carbol_binario() { raiz = 0; }
	void insertaOrdenado(int e); //No recursivo

	//Atributo puede ser público
public:
	cnodo<A> * raiz;
};

template <class A>
void carbol_binario<A>::insertaOrdenado(int e) {
	cnodo<A> * nuevo = new cnodo<A>(e);
	cnodo<A> * root = raiz;
	cnodo<A> * padre = NULL;
	if (raiz == NULL) {
		raiz = nuevo;
	}
	else {
		while (root != NULL) {
			padre = root;
			if (root->datos > e) {
				root = root->izq;
			}
			else {
				root = root->der;
			}
		}
		if (padre->datos > e) {
			padre->izq = nuevo;
		}
		else {
			padre->der = nuevo;
		}
	}
}