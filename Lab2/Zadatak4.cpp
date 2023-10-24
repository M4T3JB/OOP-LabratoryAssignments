#include <iostream>
#include <string>
#include <cstring>
#include "prototipovi.h"
#include <vector>


using namespace std;



int main()
{
	int vel_stringa;

	cout << "Unos velicine stringa " << endl;
	cin >> vel_stringa;

	vector<string> v(vel_stringa);

	stringUVector(v, vel_stringa);
	okreniString(v, vel_stringa);
	sortiranjeOkrenutih(v);
	ispisVectorString(v, vel_stringa);

	return 0;
}
