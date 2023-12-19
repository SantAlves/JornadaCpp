
//Aula 24 - Curso de C++ #24 - Omiss�o de argumentos e argumentos padr�o

#include <iostream>
#include <tchar.h>

using namespace std;


void imp(string txt= "valor padr�o"); //Imprime um valor padr�o que eu der caso seja omitido algum argumento e n�o dar erro ao compilar. 

// void imp(string txt); Dria erro ao compilar.

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	imp("com argumento declado na fun��o");

	// Na fun��o abaixo ir� imprimir o valor padr�o pois n�o passei nenhum argumento.
	imp();
}

void imp(string txt) {
	cout << "\n\n" << txt << "\n\n";
}