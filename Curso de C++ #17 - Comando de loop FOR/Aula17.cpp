
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	/*
		for( iniciar; condi��o; incremento/decremento){
			// comandos
		}
	*/

	int x, y;

	//Note que podemos inicializar e incrementar mais de uma vari�vel 

	for (x = 0, y = 2; x <= 10; x++, y *= 2) {
		cout << x << " - " << y << "\n";
	}

	return 0;

}