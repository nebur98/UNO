#pragma once

/*

** Autor: Rub�n Pereira Ugalde
** Localidad y Fecha: Costa Rica - Mayo 2019
** Justificaci�n:
		El mazo de cartas contiene exactamente 108 cartas, por lo cual
		una colecci�n de tipo lista no ser�a lo m�s adecuado, 
		�un vector?, pues s�, ser�a lo m�s "f�cil", ya que necesitamos
		"revolver" las cartas una vez antes de cada juego, es m�s 
		sencillo cambiar �ndices de un vector que jugar con los 
		punteros de una lista.. Una pila ya que vamos sacando del final
		como en un juego de UNO normal.

*/

#include <sstream>

template <class P>
class pila {
public:
	pila(int nelem = 108); //108 cartas por defecto, no hay m�s en el mazo
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
	vec = new P[numero_elementos]; //Bien se podr�a hacer arriba 
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