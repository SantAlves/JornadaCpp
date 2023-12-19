
//Aula 24 - Curso de C++ #24 - Omissão de argumentos e argumentos padrão

#include <iostream>
#include <tchar.h>

using namespace std;


void imp(string txt= "valor padrão"); //Imprime um valor padrão que eu der caso seja omitido algum argumento e não dar erro ao compilar. 

// void imp(string txt); Dria erro ao compilar.

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	imp("com argumento declado na função");

	// Na função abaixo irá imprimir o valor padrão pois não passei nenhum argumento.
	imp();
}

void imp(string txt) {
	cout << "\n\n" << txt << "\n\n";
}