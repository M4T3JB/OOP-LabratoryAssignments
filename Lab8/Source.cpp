#include <iostream>
#include <string>
#include <vector>
#include "Min.h"
#include "Point.h"
#include "Niz.h"
#include "Skup.h"

using namespace std;


int main()
{
	/*int a = 5;
	int  b = 9;
	
	cout << min(a,b) << endl;*/

	char* p = new char; 
	char* d = new char; 
	cin >> p;
	cin >> d;

	cout << min(p, d) << endl;

	point <int> p1(2, 3), p2(3, 4);
	cout << " udaljenost tocaka " << p1 << " i " << p2 << " je " << p1 - p2 << endl;



	int arr[] = { 69,1950,1911,420 };
	char slova[] = { 'Z','d','S','u' };

	int vel_slova = sizeof(slova) / sizeof(slova[0]);
	int vel_arr = sizeof(arr) / sizeof(arr[0]);

	sort(arr, vel_arr);
	sort(slova, vel_slova);

	cout << "Sortirani niz: " << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		cout << arr[i] << " ";
	cout << endl;
	cout << "Sortirana slova" << endl;
	for (int i = 0; i < sizeof(slova) / sizeof(slova[0]); ++i)
		cout << slova[i] << " " ;
	cout << endl;

	Array<int> a(100);

	a.add(69);
	a.add(420);
	a.add(1986);
	a.remove(1986);
	a.add(1950);
	a.add(1911);
	a.remove(69);
	a.print();

	if (a.check(420) == 0)
		cout << "Broj je u nizu" << endl;
	else
		cout << "Broj nije u nizu" << endl;

}