#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	int cont = 0;

	while (cont++ < 25)
	{
		cout << cont << " Ir de 0 ate 25\n";

		if (cont == 15) {
			cout << "Para o código quando cont = 15";
			break;
		}
	}
}