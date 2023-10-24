#include "Ptica.h"
#include "Pauk.h"
#include "Kukac.h"
#include "Header.h"



class Brojac
{
	int ukupnoNoge = 0;
public:
	void collect(Ptica& pt);
	void collect(Pauk& pa);
	void collect(Kukac& ku);
	int returnUN();

};
