#include<iostream>
using namespace std;

void zbroj_prethodnika(int arr[], int n)
{
    int temp[n];
    temp[0]=1;
    temp[1]=1;
    for(int i=2;i<n;i++)
    {
        temp[i]=arr[i-1]+arr[i-2];
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];



}


int main()
{
    int i;
    int n=5;
	int *array{ new int[n]{ 1, 1, 15, 3, 11 } };;

    zbroj_prethodnika(array, n);

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}
