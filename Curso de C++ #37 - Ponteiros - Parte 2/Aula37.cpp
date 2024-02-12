#include <iostream>
#include <tchar.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	int *ponteiro;
	int vetor[5];

	ponteiro = &vetor[0];
	cout << "\n" << ponteiro << "\n";

	*(ponteiro += 1);
	cout << "\n" << ponteiro << "\n";

	*(ponteiro += 1);
	cout << "\n" << ponteiro << "\n";


	return 0;
}

/*
	Primeiro exemplo sem incrementação do vetor:

	#include <iostream>
	#include <tchar.h>

	using namespace std;

	int main() {

		_tsetlocale(LC_ALL, _T("portuguese"));

		int *ponteiro;
		int vetor[5];

		ponteiro = &vetor[0];
		cout << "\n" << ponteiro << "\n";

		ponteiro = &vetor[1];
		cout << "\n" << ponteiro << "\n";

		ponteiro = &vetor[2];
		cout << "\n" << ponteiro << "\n";


		return 0;
	}

*/