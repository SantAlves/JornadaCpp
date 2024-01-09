//Curso de C++ #30 - Fila / Queue


#include <iostream>
#include <tchar.h>
#include <queue>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	queue <string> clientes;

	clientes.push("Carlos");
	clientes.push("Pedro");
	clientes.push("José");
	clientes.push("Mateus");
	clientes.push("Isac");

	cout << "Barbearia do Zé: pegue uma senha e aguarde sua vez. \n";

	while (!clientes.empty()) {
		cout << "Pessoas na fila: " << clientes.size() << "\n";
		cout << "Primeiro da fila: " << clientes.front() << "\n";
		cout << "Ultimo da fila: " << clientes.back() << "\n";

		cout << "O primeiro da fila foi atendido? (S/N) ";
		char resposta;
		cin >> resposta;

		if (resposta == 'S' || 's') {
			clientes.pop();
		}
	}

	return 0;
}
