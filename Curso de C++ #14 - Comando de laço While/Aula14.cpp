#include <iostream>

using namespace std;

int main() {
	// Declara uma variável para armazenar o número da tabuada
	int numero;

	// Pede ao usuário para inserir o número da tabuada
	cout << "Digite o número da tabuada: ";
	cin >> numero;

	// Declara uma variável para armazenar o número atualOF
	int multiplicador = 1;

	// Enquanto o multiplicador for menor ou igual a 10, imprima a tabuada
	while (multiplicador <= 10) {
		cout << numero << " x " << multiplicador << " = " << numero * multiplicador << endl;
		multiplicador++;
	}

	// Pergunta ao usuário se ele quer finalizar ou ver outra tabuada
	char resposta;
	cout << "Deseja finalizar (F) ou ver outra tabuada (O)? ";
	cin >> resposta;

	// Se a resposta for F, finalize o programa
	if (resposta == 'F') {
		return 0;
	}

	// Se a resposta for O, imprima a tabuada novamente
	else {
		main();
	}
}




/*
// Primeiro exemplo da Aula

*Pode ser incrementado de 2 em 2, 3 em 3... etc. Só trocar o n++ por "n+=2" para ser de 2 em dois.

#include <iostream>

using namespace std;

int main() {

	int n = 0;

	while (n <= 10)
	{
		cout << n << "\n";
		n++;
	}


}*/

/*
// Segundo exemplo da Aula

* Neste exemplo ao invés de incrementar, ele pede para que eu digite um numero,
* e se esse numero for menor ou = a 10, o loop continua.
* 
#include <iostream>

using namespace std;

int main() {

	int n = 0;

	while (n <= 10)
	{
		cout << n << "\n";
		cin >> n;
	}


}*/


/*
// Terceiro exemplo da Aula

#include <iostream>

using namespace std;

int main() {

	int cont = 0;

	while (cont <= 10)
	{
		cout << n << "\n Aula 14 - while \n";
		n++;
	}


}*/

/*
// Quarto exemplo

#include <iostream>

using namespace std;

int main() {

	int cont = 10;

	while (cont >= 0)
	{
		cout << cont << " Aula 14 - while \n";
		cont--;
	}
}


*/

/*
// Quinto exemplo
*Neste exemplo a incrementação ocorre na propria chamada da função

#include <iostream>

using namespace std;

int main() {

	int cont = 10;

	while (cont-- >= 0)
	{
		cout << cont << " Aula 14 - while \n";
		
	}
}


*/