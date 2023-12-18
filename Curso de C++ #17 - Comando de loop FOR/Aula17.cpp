
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	/*
		for( iniciar; condição; incremento/decremento){
			// comandos
		}
	*/

	int x, y;

	//Note que podemos inicializar e incrementar mais de uma variável 

	for (x = 0, y = 2; x <= 10; x++, y *= 2) {
		cout << x << " - " << y << "\n";
	}

	return 0;

}