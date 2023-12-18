#include <iostream>

using namespace std;

//Curso de C++ #11 - Operadores AND, OR, NOT

int main() {
	

	// Testando  a lógica do "e"; and; &&;
	/*
	
	*	int num;
	*
	*	cout << "Digite um número: ";
	*	cin >> num;
	*
	*	if (num > 4 && num < 7) {
	*	cout << "Valor aceito!";
	*	}
	*	else {
	*	cout << "Não aceito!";
	*	}
	*
	*	return 0;
	
	*/

	// Testando  a lógica do "ou"; ||;

	/*
	
	*	int num;
	*
	*	cout << "Digite um número: ";
	*	cin >> num;
	*
	*	if ((num < 5 || num < 10) || (num > 11 && num < 20)) {
	*		cout << "Valor aceito!";
	*}
	*	else {
	*		cout << "Não aceito!";
	*	}
	*
	*	return 0;
	
	*/

	int num;
	
	cout << "Digite um número: ";
	cin >> num;

	if ((num < 5 || num < 10) || (num > 11 && num < 20)) {
		cout << "Valor aceito!";
	}
	else {
		cout << "Não aceito!";
	}

	return 0;

}