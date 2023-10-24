#pragma once
#include <string>
using namespace std;


template <typename T> void sort(T arr[], int vel)
{
	for (int i = 0; i < vel - 1; ++i) {
		for (int j = i + 1; j < vel; ++j) {
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
}


template <> void sort<char>(char arr[], int vel)
{
	int i,j;
	for (i = 0; i < vel-1; ++i)
	{
		for (j = i + 1; j < vel; ++j) 
		{
			if (tolower(arr[i]) > tolower(arr[j]))
				swap(arr[i], arr[j]);
		}
	}
}