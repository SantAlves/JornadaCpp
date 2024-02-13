#include <iostream>
#include <locale.h> // configuração de região
#include <string> // para função getline
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
	#include <locale.h> // configuração de região
	#include <string> // para função getline

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
	#include <locale.h> // configuração de região
	#include <string> // para função getline
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
	#include <tchar.h> // configuração de região
	#include <stdio.h> // para função gets


	using namespace std;

	int main() {

		_tsetlocale(LC_ALL, _T("portuguese"));

		char vnome[50];

		cin >> vnome;

		cout << vnome;

		return 0;
	}

*/
