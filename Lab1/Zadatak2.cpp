#include <iostream>
using namespace std;
int funct(int arr[], int n)
{
    int i,j,k;

    for(i=0;i<n;++i)
        for(j=i+1;j<n;)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;++k)
                arr[k]=arr[k+1];
                --n;
            }
            else
                ++j;
        }
    return n;
}

int unos_niza(int arr[],int n)
{
    int i;

	cout << "Unesi elemente";
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

int ispis_niza(int arr[],int n)
{
    int i;
    for (i = 0; i < n; i++)
		cout << arr[i] << ' ';
}
int main()
{
	int n=5;
	int *arr = new int(n);
	unos_niza(arr,n);
	int n1=funct(arr, n);
	ispis_niza(arr,n1);



}
