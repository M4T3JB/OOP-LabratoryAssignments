#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;


class Pauk : public Zivotinja
{
public:
	virtual string ime() = 0;
	virtual int brojNogu() = 0;

	string vrsta()
	{
		return "Pauk";
	}

};