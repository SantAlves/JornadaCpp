
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int cont = 20;

	// Ao usar a condição "do...while", o código será uasado apenas uma vez e só depois terá o teste lógico;

	 do{
		cout << "Um passo de cada vez!";
		cont++;
	 } 
	 while (cont < 20);

	cout << "FIM!";
}


/*
	Neste exemplo com while, onde cont não é menor qeu 20 e sim igual, a operação nem executa o código...e pula para o final. Diferente do "do...while"


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