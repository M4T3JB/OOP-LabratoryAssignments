#pragma once
#include <iostream>
#include <string>
#include "Header.h"
#include "Kukac.h"
using namespace std;

class Muha : public Kukac
{
public:
	string ime()
	{
		return "Muha";
	}
	int brojNogu()
	{
		return 4;
	}
};