#include <iostream>
#include <tchar.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));
	string veiculo = "Carro";
	string *pv;

	pv = &veiculo; // Ponteiro pv recebe o endereço da variável veículo.

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da variável veículo com 'pv': " << pv << "\n\n";

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da variável veículo com '&veiculo': " << &veiculo << "\n\n";

	cout << "Impimindo na tela o valor da variável veículo com 'pv': " << *pv << "\n\n";

	cout << "Impimindo na tela o valor da variável veículo com 'veiculo': " << veiculo << "\n\n\n";

	cout << "Abaixo segue o exemplo da alteração da variável usando o ponteiro" << "\n\n\n";


	*pv = "Moto"; // No endereço apontado pro pv, adicione o valor moto.

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da variável veículo com 'pv': " << pv << "\n\n";

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da variável veículo com '&veiculo': " << &veiculo << "\n\n";

	cout << "Impimindo na tela o valor da variável veículo com 'pv': " << *pv << "\n\n";

	cout << "Impimindo na tela o valor da variável veículo com 'veiculo': " << veiculo << "\n\n\n";

	

	


	return 0;
}
