#include <iostream>
#include <tchar.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));
	string veiculo = "Carro";
	string *pv;

	pv = &veiculo; // Ponteiro pv recebe o endere�o da vari�vel ve�culo.

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da vari�vel ve�culo com 'pv': " << pv << "\n\n";

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da vari�vel ve�culo com '&veiculo': " << &veiculo << "\n\n";

	cout << "Impimindo na tela o valor da vari�vel ve�culo com 'pv': " << *pv << "\n\n";

	cout << "Impimindo na tela o valor da vari�vel ve�culo com 'veiculo': " << veiculo << "\n\n\n";

	cout << "Abaixo segue o exemplo da altera��o da vari�vel usando o ponteiro" << "\n\n\n";


	*pv = "Moto"; // No endere�o apontado pro pv, adicione o valor moto.

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da vari�vel ve�culo com 'pv': " << pv << "\n\n";

	cout << "Impimindo na tela o local na memoria onde se econtra o valor da vari�vel ve�culo com '&veiculo': " << &veiculo << "\n\n";

	cout << "Impimindo na tela o valor da vari�vel ve�culo com 'pv': " << *pv << "\n\n";

	cout << "Impimindo na tela o valor da vari�vel ve�culo com 'veiculo': " << veiculo << "\n\n\n";

	

	


	return 0;
}
