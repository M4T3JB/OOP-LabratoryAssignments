#include <iostream>
#include "Header.h"
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int broj,broj2;
	char znak;
	time_t now = time(0);
	char* dt = ctime(&now);

	vector<string> v;
	
	while(1)
	{
		try
		{
			broj = number_input();
			broj2 = number_input();
			znak = operator_input();
			results(broj, broj2, znak);

		}
		catch (X x)
		{
			v.push_back(dt);
			v.push_back(x.err);

		}
		catch (Y y)
		{
			v.push_back(y.err);
		}
		catch (Z z)
		{
			v.push_back(z.err);
		}

	}
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << ' ';
	

}