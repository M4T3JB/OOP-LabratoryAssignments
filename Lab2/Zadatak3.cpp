#include <iostream>
#include "prototipovi.h"
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string str;
	char podstring;

	cout << "Unos stringa: \n";
	getline(cin, str);

	cout << "Unos podstringa: \n";
	cin >> podstring;

	cout << ponavljanjeStringa(str, podstring);

}
