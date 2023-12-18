
//Curso de C++ #19 - Array bidimensional / Matriz

#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int matriz [2] [3];
	int l, c;



	cout << "Minha primeira matriz em C++ \n";

	//Adicionando valores a minha matriz manualmente a partir do teclado;
	
	for (l = 0; l < 2; l++) {
		for (c = 0; c < 3; c++) {
			cout << "\nDigite um valor para matriz na linha :" << l << " e coluna: " << c << "\n\n";
			cin >> matriz[l][c];
		}
	}

	cout << "Valores digitados: \n";

	for (l = 0; l < 2; l++) {
		for (c = 0; c < 3; c++) {
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}

	return 0;
}

/*
	Exemplo 1 - adicionando valores manuais a matriz!
	
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int matriz [2] [3];
	int l, c;


	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	


	cout << "Minha primeira matriz em C++ \n";

	for (l = 0; l < 2; l++) {
		for (c = 0; c < 3; c++) {
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}

	return 0;
}

*/


/*
	Exemplo 2 - adicionando automaticamente valores a minha matriz com a estrutura for
	
	#include <iostream>
	#include <locale>

	using namespace std;

	int main() {

	setlocale(LC_ALL, "portuguese");

	int matriz [2] [3];
	int l, c;



	cout << "Minha primeira matriz em C++ \n";

	//Estrutura for para adicionar valores automáticos a minha matriz
	
	for (l = 0; l < 2; l++) {
		for (c = 0; c < 3; c++) {
			matriz[l][c]=l;
		}
	}

	for (l = 0; l < 2; l++) {
		for (c = 0; c < 3; c++) {
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}

	return 0;
}

*/