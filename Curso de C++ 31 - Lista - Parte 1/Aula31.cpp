
//

#include <iostream>
#include <tchar.h>
#include <list>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	list<int> aula;
	int tam;
	list<int>::iterator it;

	tam = 10;
	for (int i = 0; i < tam; i++) {
		aula.push_front(i);
	}

	cout << "Tamanho da lista: " << aula.size() << "\n\n";

	//Usado para ordenar a lista. E usamos "aula.reverse();"para inverter.
	aula.sort();

	tam = aula.size();
	for (int i = 0; i < tam; i++) {
		cout << aula.front() << "\n\n";
		aula.pop_front();
	}

	return 0;
}

/*
	Exemplo da aula usando o Iterator:

	#include <iostream>
#include <tchar.h>
#include <list>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	list<int> aula;
	int tam;
	list<int>::iterator it;

	tam = 10;
	for (int i = 0; i < tam; i++) {
		aula.push_front(i);
	}

	it = aula.begin();
	advance(it, 5);

	aula.insert(it, 0);

	cout << "Tamanho da lista: " << aula.size() << "\n\n";

	tam = aula.size();
	for (int i = 0; i < tam; i++) {
		cout << aula.front() << "\n\n";
		aula.pop_front();
	}

	return 0;
}

*/