#include <iostream>
using namespace std;
int& funct(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			return arr[i];
		}
	}
	return arr[0];
}
int main()
{
	int i,j;
	int *array{ new int[5]{ -10, -7, 15, 3, 11 } };;
	for (i = 0; i < 5; i++)
	    cout << array[i] << ' ';

    cout << '\n';
    int novi=funct(array,5);

	array[novi]=0;
	for (j = 0; j < 5; j++)
		cout << array[j] << ' ';

}
