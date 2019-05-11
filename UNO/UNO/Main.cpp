#include <iostream>
#include "Jugador.h"
using std::cout;
using std::cin;



int main() {
	lista<carta> * mazo = new lista<carta>();
	for (int i = 0; i < 108; i++) {
		if (i <= 9) {
			carta * ci = new carta(std::to_string(i), 'N', 'A');
			mazo->agregar_principio(ci);
		}
		if (i > 9 && i <= 18) {
			carta * ci = new carta(std::to_string(i-i), 'N', 'A');
		}
	}
	cout << mazo->toString();
	system("pause");
	



	return 0;
}