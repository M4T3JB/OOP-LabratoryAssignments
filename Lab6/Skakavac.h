#pragma once
#include <iostream>
#include <string>
#include "Header.h"
#include "Kukac.h"
using namespace std;

class Skakavac : public Kukac
{
public:
	string ime()
	{
		return "Skakavac";
	}
	int brojNogu()
	{
		return 4;
	}
};
