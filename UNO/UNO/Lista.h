#pragma once
#include <sstream>


template <class N>
class nodo {
public:
	nodo(nodo*, N*);
	virtual ~nodo();
	void set_siguiente(nodo*);
	nodo * get_siguiente() const;
	N * get_dato() const;
private:
	nodo * siguiente;
	N * dato;
};

template <class N>
nodo<N>::nodo(nodo * siguiente, N * dato) : siguiente(siguiente), dato(dato) {}

template <class N>
nodo<N>::~nodo() {} //Innecesario

template <class N>
nodo<N>* nodo<N>::get_siguiente() const {
	return siguiente;
}

template <class N>
N * nodo<N>::get_dato() const {
	return dato;
}

template <class N>
void nodo<N>::set_siguiente(nodo * sig) {
	siguiente = sig;
}

template <class L>
class lista {
public:
	lista();
	virtual ~lista();
	void agregar_principio(L*);
	int get_cantidad();
	std::string toString();
private:
	nodo<L> * primero;
	int cant;
};

template <class L>
lista<L>::lista() : primero(NULL) {}

template <class L>
lista<L>::~lista() {
	if (primero != NULL) { //Si es NULL es porque no hay nada por eliminar.. 
		nodo<L> * actual;
		while (primero != NULL) {
			actual = primero;
			primero = primero->get_siguiente();
			delete actual;
		}
	}
}

template <class L>
void lista<L>::agregar_principio(L * dato) {
	primero = new nodo<L>(primero, dato); //Insertando de primero...
	cant++;
}

template <class L>
int lista<L>::get_cantidad() {
	return cant;
}

template<class L>
std::string lista<L>::toString() {
	std::stringstream s;
	nodo<L> * actual = primero;
	while (actual != NULL) {
		s << actual->get_dato()->toString();
		actual = actual->get_siguiente();
	}
	return s.str();
}
