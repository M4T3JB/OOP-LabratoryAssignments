#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class Kukac : public Zivotinja
{
public:
	virtual string ime() = 0;

	int brojNogu()
	{
		return 4;
	}
	string vrsta()
	{
		return "Kukac";
	}


};

