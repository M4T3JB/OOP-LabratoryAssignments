#pragma once
#include <iostream>
#include <string>
#include "Header.h"
#include "Ptica.h"
class Orao : public Ptica
{
public:
	string ime()
	{
		return "Orao";
	}
	int brojNogu()
	{
		return 2;
	}
};