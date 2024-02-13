#include <iostream>
#include <locale.h> // configura��o de regi�o
#include <string> // para fun��o getline
#include <memory> // para std::shared_ptr

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	shared_ptr<string> vnome = make_shared<string>();

	cout << "Digite seu nome completo: " << "\n";

	getline(cin, *vnome);

	cout << *vnome;

	return 0;
}


/*
	#include <iostream>
	#include <locale.h> // configura��o de regi�o
	#include <string> // para fun��o getline

	using namespace std;

	int main() {

		setlocale(LC_ALL, "portuguese");

		string vnome;

		getline(cin, vnome);

		cout << vnome;

		return 0;
}

*/

/*

	#include <iostream>
	#include <locale.h> // configura��o de regi�o
	#include <string> // para fun��o getline
	#include <memory> // para std::shared_ptr

	using namespace std;

	int main() {

		setlocale(LC_ALL, "portuguese");

		shared_ptr<string> vnome = make_shared<string>();

		getline(cin, *vnome);

		cout << *vnome;

		return 0;
}


*/

/*
* 

	#include <iostream>
	#include <tchar.h> // configura��o de regi�o
	#include <stdio.h> // para fun��o gets


	using namespace std;

	int main() {

		_tsetlocale(LC_ALL, _T("portuguese"));

		char vnome[50];

		cin >> vnome;

		cout << vnome;

		return 0;
	}

*/
