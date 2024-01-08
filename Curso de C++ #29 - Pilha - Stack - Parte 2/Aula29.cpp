
//Curso de C++ #29 - Pilha / Stack - Parte 2

#include <iostream>
#include <tchar.h>
#include <stack>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	stack <string> pedidos;

	pedidos.push("4 ");
	pedidos.push("3 ");
	pedidos.push("2 ");
	pedidos.push("1 ");

	cout << "Temos " << pedidos.size() << " pedidos: \n";
	cout << "Pedido: " << pedidos.top() << " concluído. \n";
	pedidos.pop();
	cout << "Restão " << pedidos.size() << " pedidos: \n";

	while (!pedidos.empty()) {
		cout << "Deseja processar o próximo pedido? (s/n) ";
		char resposta;
		cin >> resposta;

		if (resposta == 's') {
			cout << "Pedido: " << pedidos.top() << " concluído. \n";
			pedidos.pop();
		}
		else {
			break;
		}
	}

	return 0;
}


