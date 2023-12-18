//Estrutura básica C++

#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	// Criação de um vetor com 5 valores

	int vetor[7] = {1, 10, 20, 30, 40, 50, 60};
	int i;



	//Imprimindo valores na tela com for

	for (i=0; i < sizeof(vetor)/sizeof(vetor)[0]; i++) {
		
		cout << "\n Valor da posição " << vetor[i];

	}
	
	return 0;
}

//Primeiro exemplo

/*
#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	// Criação de um vetor com 5 valores
	int vetor[5];

	//Atribundo valor para cada vetor

	vetor[0]=0;
	vetor[1]=10;
	vetor[2]=20;
	vetor[3]=13;
	vetor[4]=14;

	//Imprimindo valores na tela

	cout << vetor[0] << " valor da posição 0 no vetor\n";
	cout << vetor[1] << " valor da posição 1 no vetor\n";
	cout << vetor[2] << " valor da posição 2 no vetor\n";
	cout << vetor[3] << " valor da posição 3 no vetor\n";
	cout << vetor[4] << " valor da posição 4 no vetor\n";
	
}
*/


// Segundo exemplo
/*

	#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	// Criação de um vetor com 5 valores
	int vetor[5];
	int i;

	//Atribundo valor para cada vetor

	vetor[0]=1;
	vetor[1]=10;
	vetor[2]=20;
	vetor[3]=30;
	vetor[4]=40;

	//Imprimindo valores na tela com for

	for (i=0; i<5; i++) {
		
		cout << "\n Valor da posição " << vetor[i];

	}
	
	return 0;
}

*/

// Terceiro exemplo

/*

	#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	// Criação de um vetor com 5 valores
	int vetor[7];
	int i;

	//Atribundo valor para cada vetor

	vetor[0]=1;
	vetor[1]=10;
	vetor[2]=20;
	vetor[3]=30;
	vetor[4]=40;
	vetor[5]=50;
	vetor[6]=60;

	//Imprimindo valores na tela com for

	// Usando a estrutura "sizeof"; 

	//Cada vetor inteiro "int" tem um valor de 4 bytes, no entanto
	//dependendo do SO cada posição pode ter um tamanho maior que 4 bytes

	Por isso, segue a dica de baixo:

	Outra dica, não é recomendável dividir por 4 para achar o número de posições no vetor, 
	pois aparentemente dependendo do SO cada posição pode ter 
	um tamanho maior que 4 bytes. Para fazer um código que funcione 
	em qualquer SO é simples, ao invés de usar 4, 
	basta ler o tamanho de uma das entradas, como a primeira entrada por exemplo:
	sizeof(vetor) / sizeof(vetor[0])

	for (i=0; i < sizeof(vetor)/4; i++) {
		
		cout << "\n Valor da posição " << vetor[i];

	}
	
	return 0;
}

*/