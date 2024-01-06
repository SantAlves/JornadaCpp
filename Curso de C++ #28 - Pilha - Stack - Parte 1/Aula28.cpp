
//Curso de C++ #28 - Pilha / Stack - Parte 1

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
	cout << "Pedido: " << pedidos.top() << " em preparação \n";
	pedidos.pop();
	cout << "Restão " << pedidos.size() << " pedidos: \n";
	cout << "Pedido: " << pedidos.top() << " em preparação \n";
	pedidos.pop();
	cout << "Restão " << pedidos.size() << " pedidos: \n";
	cout << "Pedido: " << pedidos.top() << " em preparação \n";
	pedidos.pop();
	cout << "Restão " << pedidos.size() << " pedidos: \n";
	cout << "Pedido: " << pedidos.top() << " em preparação \n";
	pedidos.pop();
	cout << "Restão " << pedidos.size() << " pedidos: \n";

	return 0;
}
