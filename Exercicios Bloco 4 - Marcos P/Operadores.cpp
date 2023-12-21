
//Operadores relacionais: ==, >=, <=, !=, <, >;

#include <iostream>
#include <tchar.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	// declaração de variáveis

	int numero1, numero2;
	bool comparacao;

	//entrada de valores

	cout << "Digite o primeiro número: \n";
	cin >> numero1;
	cout << "Digite o segundo numero: \n";
	cin >> numero2;

	// processamento, comparações.

	comparacao = (numero1 == numero2);
	cout << "Número 1 = Número 2: " << comparacao << "\n";
	comparacao = (numero1 <= numero2);
	cout << "Número 1 <= Número 2: " << comparacao << "\n";
	comparacao = (numero1 >= numero2);
	cout << "Número 1 >= Número 2: " << comparacao << "\n";
	comparacao = (numero1 != numero2);
	cout << "Número 1 = Número 2: " << comparacao << "\n";
	comparacao = (numero1 > numero2);
	cout << "Número 1 > Número 2: " << comparacao << "\n";
	comparacao = (numero1 < numero2);
	cout << "Número 1 < Número 2: " << comparacao << "\n";
}
