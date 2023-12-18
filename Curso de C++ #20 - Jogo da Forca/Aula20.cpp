
//Estrutura b�sica C++

#include <iostream>
#include <tchar.h>
#include <stdlib.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declara��o de vari�veis para nosso jogo

	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;

	//Adicioando valores padr�es para nossoas vari�veis
	//

	chances = 6;
	tam = 0;
	i = 0;
	acertos = 0;
	acerto = false;

	cout << "************************** \n";
	cout << "****IN�CIO DO JOGO**** \n";
	cout << "************************** \n\n";
	cout << "Feche os olhos, escolha uma palavra e digite no teclado: ";
	cin >> palavra;
	system("cls");

	while (palavra[i] != '\0') {
		i++;
		tam++;
	}

	for (i = 0; i < 30; i++) {
		secreta[i] = '-';
	}

	while ((chances > 0) && (acertos < tam)) {
		cout << "Chances restantes :" << chances << "\n\n";
		cout << "Palavra secreta :";

		for (i = 0; i < tam; i++) {
			cout << secreta[i];
		}
		cout << "\n\nDigite uma letra:";
		cin >> letra[0];
		for (i = 0; i < tam; i++) {
			if (palavra[i] == letra[0]) {
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		if (!acerto) {
			chances--;
		}
		acerto = false;
		system("cls");
	}
	if (acertos == tam) {
		cout << "Voc� venceu!";
	}
	else {
		cout << "Que pena, voc� perdeu!";
	}
	system("pause");
}
