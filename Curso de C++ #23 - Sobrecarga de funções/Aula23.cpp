
//Aula 23 - Curso de C++ #23 - Sobrecarga de funções

#include <iostream>
#include <tchar.h>

using namespace std;


void soma(int n1, int n2);

void soma();

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	soma(10,10);
	soma();

	return 0;
}

void soma(int n1, int n2) {
	int re;
	re = n1 + n2;
	cout << "Soma de " << n1 << " com " << n2 << " = " << re << "\n\n";
}

void soma() {
	int n1, n2, re;
	n1 = 3;
	n2 = 5;
	re = n1 + n2;
	
	cout << "Soma de " << n1 << " com " << n2 << " = " << re << "\n\n";
}
