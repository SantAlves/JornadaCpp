
/*
Curso de C++ #27 - Enum
Nesta aula iremos aprender como trabalhar com a estrutura enum, vamos aprender
a construirenumeradores em C++
*/

#include <iostream>
#include <tchar.h>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	enum armas { fuzil = 100, revolver = 8, rifle = 12, escopeta=1 };
	armas armaSel;

	// Menu de opções
	cout << "Escolha a arma que deseja ver a quantidade de balas:" << endl;
	cout << "1. Fuzil" << endl;
	cout << "2. Revolver" << endl;
	cout << "3. Rifle" << endl;
	cout << "4. Escopeta" << endl;

	// Recebe a opção do usuário
	int opcao;
	cin >> opcao;

	// Mostra a quantidade de balas da arma selecionada
	
	switch (opcao) {
	case 1:
		armaSel = fuzil;
		break;
	case 2:
		armaSel = revolver;
		break;
	case 3:
		armaSel = rifle;
		break;
	case 4:
		armaSel = escopeta;
		break;
	default:
		cout << "Opção inválida." << endl;
		return 1;
	}

	cout << "A quantidade de balas da arma selecionada é: " << armaSel << endl;

	return 0;


}




/*
	int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));

	enum armas { fuzil = 100, revolver = 8, rifle = 12, escopeta=1 };
	armas armaSel;

	armaSel = rifle;

	cout << armaSel;

	return 0; 
}
*/