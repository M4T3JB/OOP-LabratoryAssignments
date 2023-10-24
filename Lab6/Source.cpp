#include <iostream>
#include <string>
#include "Header.h"
#include "brojac.cpp"
#include "Kukac.h"
#include "Ptica.h"
#include "Pauk.h"
#include "Muha.h"
#include "Orao.h"
#include "Skakavac.h"
#include "Tarantula.h"

using namespace std;

int main()
{
	Skakavac ska;
	
	Brojac b;
	b.collect(ska);

	cout << b.returnUN() << endl;


	

	return 0;
}