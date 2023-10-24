#ifndef VECTOR
#define VECTOR

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <string>
#include <sstream>
#include <cstring>


using namespace std;

vector<int>& unosPoVelicini(vector<int>& v, int vel_vectora)
{
	cout << "Unos vectora" << endl;
	for (int i = 0; i < vel_vectora; i++)
	{
		cin >> v[i];
	}
	return v;
}


vector<int>& unosPoRasponu(vector<int>& v, int pocetak, int kraj)
{
	int x = pocetak - 1;
	while (pocetak <= x && x < kraj)
	{
		cin >> x;
		if (pocetak <= x && x < kraj)
			v.push_back(x);
	}
	return v;
}


int ispisVectora(vector<int> v, int vel_vectora)
{
	cout << "Ispis vectora: \n ";
	int i;
	for (i = 0; i < vel_vectora; i++)
		cout << v[i] << endl;

	return 0;
}


vector<int>& sortiranjeVectora(vector<int>& v)
{
	sort(v.begin(), v.end());

	return v;
}


vector<int>& ubacivanjeNule(vector<int>& v, int& vel_vectora)
{
	vector<int>::iterator najm = min_element(v.begin(), v.end());
	v.insert(najm, 0);

	vel_vectora++;


	return v;
}


vector<int>& suma(vector<int>& v, int& vel_vectora)
{
	int suma = 0;
	int i;

	for (i = 0; i < vel_vectora; i++)
	{
		suma += v[i];
	}
	v.emplace_back(suma);
	cout << "Suma je : " << suma << endl;;
	vel_vectora++;

	return v;
}


int ponavljanjeStringa(string str, char zn)
{
	int br = 0;
	int i;
	for (i = 0; i < str.size(); i++)
		if (str[i] == zn)
			br++;

	return br;
}



vector<string>& stringUVector(vector<string>& v, int vel_vectora)
{
	cout << "Unos stringova \n";
	string str;

	for (int i = 0; i < vel_vectora; i++)
	{
		cin >> str;
		v[i] = str;
	}

	return v;
}



vector<string>& okreniString(vector<string>& v, int vel_vectora)
{
	int i;
	string tmp;

	for (i = 0; i < vel_vectora; i++)
	{
		tmp = v[i];
		reverse(tmp.begin(), tmp.end());
		v[i] = tmp;
	}

	return v;
}



vector<string>& sortiranjeOkrenutih(vector<string>& v)
{
	sort(v.begin(), v.end());

	return v;
}



void ispisVectorString(vector<string> v, int vel_vectora)
{
	int i;
	for (i = 0; i < vel_vectora; i++)
	{
		cout << v[i] << endl;
	}
}



string ispravakZareza(string& str)
{
	int i;
	int vel_str = str.size();

	for (i = 1; i < vel_str; i++)
	{
		if (str[i] == ',' || str[i] == '.')
		{
			if (str[i - 1] == ' ') {
				str.erase(str.begin() + (i - 1));
				i--;
			}
			if (str[i + 1] != ' ')
			{
				str.insert(str.begin() + i + 1, ' ');
				i--;
			}
		}
	}
	return str;
}

bool pigLatin(string& str)
{
	bool flag = true;
	int i;


	for (i = 0; i < str.length(); i++)
	{
		if ((str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') && flag == true)
		{
			str.append("hay");
			break;
		}


		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			str.append("ay");
			break;
		}


		else
		{
			str.push_back(str[i]);
			str.erase(str.begin());
			i--;
			flag = false;
		}
	}
	return true;
}

vector<string> receniceEng() {
	vector<string> v;

	int i;
	for (i = 0; i < 1; i++)
	{
		string str;
		getline(cin, str);
		v.push_back(str);
	}
	vector<string> vct;
	string str2;
	int i;


	for (i = 0; i < v.size(); i++)
	{
		string x;
		for (int j = 0; j < v[i].length() + 1; j++)
		{
			if (v[i][j] == ' ' || v[i][j] == '\0')
			{
				bool f = true;
				int sze = 0;
				if (pigLatin(x) == true)
				{
					str2.append(x + ' ');
					x.clear();
				}

			}
			else
				x.push_back(v[i][j]);

		}
		str2.erase(str2.length());
		vct.push_back(str2);
		cerr << str2 << endl;
		str2.clear();

	}
	return vct;
}
#endif