
//Estrutura básica C++

#include <iostream>
#include <tchar.h>
#include <stdlib.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declaração de variáveis para nosso jogo

	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;

	//Adicioando valores padrões para nossoas variáveis
	//

	chances = 6;
	tam = 0;
	i = 0;
	acertos = 0;
	acerto = false;

	cout << "************************** \n";
	cout << "****INÍCIO DO JOGO**** \n";
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
		cout << "Você venceu!";
	}
	else {
		cout << "Que pena, você perdeu!";
	}
	system("pause");
}
