#include <iostream>
#include "Brojac.h"
#include "Ptica.h"
#include "Pauk.h"
#include "Kukac.h"
using namespace std;

void Brojac::collect(Ptica& pt)
{
	ukupnoNoge += pt.brojNogu();
	cout << "dodan: " << pt.vrsta() << endl;
}

void Brojac::collect(Pauk& pa)
{
	ukupnoNoge += pa.brojNogu();
	cout << "dodan: " << pa.vrsta() << endl;
}

void Brojac::collect(Kukac& ku)
{
	ukupnoNoge += ku.brojNogu();
	cout << "dodan: " << ku.vrsta() << endl;
}

int Brojac::returnUN()
{
	return ukupnoNoge;
}
