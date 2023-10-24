#include <iostream>
using namespace std;
#include "prototipovi.h"
#include <vector>

int main()
{
	int pocetak, kraj;
	cout << "Unos donje granice: \n";
	cin >> pocetak;
	cout << "Unos gornje granice: \n";
	cin >> kraj;

	int vel_vectora = 0;
	cout << "Unos velicine: \n ";
	cin >> vel_vectora;

	vector<int> v(vel_vectora);

	unosPoVelicini(v, vel_vectora);
	ispisVectora(v, vel_vectora);

	/*vector<int> raspon(0);

	unosPoRasponu(raspon,pocetak,kraj);

	int rasponVelicine = raspon.size();
	ispisVectora(raspon, rasponVelicine);*/

}