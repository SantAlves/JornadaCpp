#include <iostream>
#include <locale>
using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	//Declara��o das vari�veis 

	int nota1, nota2, notaFinal;
	string res;


	cout << "Digite a primeira nota :";
	cin >>  nota1;
	cout << "Digite a segunda nota :";
	cin >> nota2;

	notaFinal = (nota1 + nota2 / 2);

	// Atribuindo valores direto no "res" ou...
	/*
	* 
	* (notaFinal >= 7) ? res = "Aprovado!" : res = "Reprovado!";
	* 
	*/

	
	// Podemos colocar as condi��es de aprovado ou reprovado como retornos para "res"

	res = (notaFinal >= 7) ? "Aprovado" : "Reprovado";

	cout << "\n Situacao do aluno: " << res << " em sua m�dia final.";
}