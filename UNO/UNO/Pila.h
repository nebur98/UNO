#pragma once

/*

** Autor: Rubén Pereira Ugalde
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificación:
		El mazo de cartas contiene exactamente 108 cartas, por lo cual
		una colección de tipo lista no sería lo más adecuado, 
		¿un vector?, pues sí, sería lo más "fácil", ya que necesitamos
		"revolver" las cartas una vez antes de cada juego, es más 
		sencillo cambiar índices de un vector que jugar con los 
		punteros de una lista.. Una pila ya que vamos sacando del final
		como en un juego de UNO normal.

*/

#include <sstream>

template <class P>
class pila {
public:
	pila(int nelem = 108); //108 cartas por defecto, no hay más en el mazo
	~pila();
	bool poner(P * valor);
	bool sacar( );
	bool vacia();
	bool llena();
	P * top();
private:
	int numero_elementos;
	P * vec;
	int limite;
};

template <class P>
pila<P>::pila(int nelem) : numero_elementos(nelem), limite(-1){ //108 
	vec = new P[numero_elementos]; //Bien se podría hacer arriba 
}

template <class P>
pila<P>::~pila(){ }

template <class P>
bool pila<P>::poner(P * valor) {
	if (!llena()) {
		vec[++limite] = valor;
		return true;
	}
	else
		return false;
}

template <class P>
bool pila<P>::sacar( ) {
	if (!vacia()) {
		vec[limite--];
		return true;
	}
	else
		return false;
}

template <class P>
bool pila<P>::vacia() {
	reutrn (limite == -1);
}

template <class P>
bool pila<P>::llena() {
	return (limite == numero_elementos - 1);
}

template <class P>
P * pila<P>::top() {
	if (limite != -1 && limite < numero_elementos)
		return vec[limite];
}