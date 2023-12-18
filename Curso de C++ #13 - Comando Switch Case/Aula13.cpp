
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int valor;

	cout << "Digite uma das op��es abaixo para escolher sua cor preferidas: \n";
	cout << "\n";
	cout << "Valor [1] = Azul \nValor [2] = Vermelho \nValor [3] = Amarelo \n";
	cin >> valor;

	while (valor < 1 || valor > 3) {
		cout << "Valor selecionado inv�lido! Digite novamente: ";
		cin >> valor;
	}

	switch (valor)
	{
	case 1 :
		cout << "Sua cor preferida � : Azul \n";
		break;
	case 2:
		cout << "Sua cor preferida � : Vermelho \n";
		break;
	case 3:
		cout << "Sua cor preferida � : Amarelo \n";
		break;

	default:
		cout << "Valor selecionado inv�lido!";
		break;


		/*Outra op��o seria atribuir mais de uma op��o para um mesmo valor:
		* 
		* 	cout << "Valor [1, 2, 3] = Azul \nValor [?, ?, ?] = Vermelho \nValor [?, ?, ?] = Amarelo \n";
		* 
		case 1:
		case 2:
		case 3:
			cout << "Sua cor preferida � : Azul \n";
			break;
		*/

		// Tamb�m podemos usar o switch aninhado:
		/*
		*	cout << "Valor 1 = Moto \nValor 2 = Carro \nValor 3 = Barco \nValor 4 = Avi�o";
		* 
		* case 1:
		* case 2:
		*	cout << "Transporte terrestre selecionado.";
		*	switch(valor) {
		*		caso 1: 
		*			cout << "Moto";
		*			break;
		*		caso 2: 
		*			cout << "Carro";
		*			break;
		*				}
		*/
	}

}