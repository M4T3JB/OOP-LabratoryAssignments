#include <iostream>
#include "prototipovi.h"
#include <vector>

using namespace std;


int main()
{
	int vel_vectora = 0;

	cout << "Unos velicine vektora: \n";
	cin >> vel_vectora;

	vector<int> v(vel_vectora);


	unosPoVelicini(v, vel_vectora);
	sortiranjeVectora(v);
	ubacivanjeNule(v, vel_vectora);
	suma(v, vel_vectora);
	ispisVectora(v, vel_vecotra);
}