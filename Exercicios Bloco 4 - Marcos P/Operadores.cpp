
//Operadores relacionais: ==, >=, <=, !=, <, >;

#include <iostream>
#include <tchar.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	// declara��o de vari�veis

	int numero1, numero2;
	bool comparacao;

	//entrada de valores

	cout << "Digite o primeiro n�mero: \n";
	cin >> numero1;
	cout << "Digite o segundo numero: \n";
	cin >> numero2;

	// processamento, compara��es.

	comparacao = (numero1 == numero2);
	cout << "N�mero 1 = N�mero 2: " << comparacao << "\n";
	comparacao = (numero1 <= numero2);
	cout << "N�mero 1 <= N�mero 2: " << comparacao << "\n";
	comparacao = (numero1 >= numero2);
	cout << "N�mero 1 >= N�mero 2: " << comparacao << "\n";
	comparacao = (numero1 != numero2);
	cout << "N�mero 1 = N�mero 2: " << comparacao << "\n";
	comparacao = (numero1 > numero2);
	cout << "N�mero 1 > N�mero 2: " << comparacao << "\n";
	comparacao = (numero1 < numero2);
	cout << "N�mero 1 < N�mero 2: " << comparacao << "\n";
}
