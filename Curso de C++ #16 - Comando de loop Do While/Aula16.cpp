
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int cont = 20;

	// Ao usar a condi��o "do...while", o c�digo ser� uasado apenas uma vez e s� depois ter� o teste l�gico;

	 do{
		cout << "Um passo de cada vez!";
		cont++;
	 } 
	 while (cont < 20);

	cout << "FIM!";
}


/*
	Neste exemplo com while, onde cont n�o � menor qeu 20 e sim igual, a opera��o nem executa o c�digo...e pula para o final. Diferente do "do...while"


#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int cont = 20;

	while (cont < 20) {
		cout << "Um passo de cada vez!";
		cont++;
	}
	cout << "FIM!";
}
*/