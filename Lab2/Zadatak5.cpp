#include <iostream>
#include <string>
#include <cstring>
#include "prototipovi.h"
#include <vector>

using namespace std;

int main()
{
	string str;
	cout << "Unos recenice: " << endl;
	getline(cin, str);

	ispravakZareza(str);
	cout << str;
}
