
// Curso de C++ #25 - Fun��es recursivas (recursividade)

#include <iostream>
#include <tchar.h>

using namespace std;

// Prot�tipo da fun��o

void contador (int num, int cont=0);

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	contador(10);

	return 0;
}

void contador (int num, int cont) {
	
	cout << cont << "\n";

	if (num > cont) {
		contador (num, cont++);
	}
}
