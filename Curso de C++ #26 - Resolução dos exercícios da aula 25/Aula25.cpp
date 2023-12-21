
//Curso de C++ #26 - Resolução dos exercícios da aula 25

#include <iostream>
#include <tchar.h>

using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	int val, res;

	cout << "Digite um número para ver o fatorial e fibonacci desse número:";
	cin >> val;
	
	res = fatorial(val);


	cout << "Fatorial de " << val << ":" << res;

	cout << "\n\nFibonacci com " << val << " valores: ";
	for (int i = 0; i < val;i++) {
		cout << fibonacci(i + 1) << " ";
	}
	cout << "\n\n";

	return 0;
}

int fatorial(int n) {
	if (n == 0) {
		return 1;
	}
	return n * fatorial(n - 1);
}

int fibonacci(int n) {
	if (n==1 || n==2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}