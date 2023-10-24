#pragma once
#include <iostream>
#include <string>
#include "Header.h"
#include "Pauk.h"
class Tarantula : public Pauk
{
public:
	string ime()
	{
		return "Tarantula";
	}
	int brojNogu()
	{
		return 8;
	}
};