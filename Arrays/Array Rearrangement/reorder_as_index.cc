#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void rearrange(int*arr, int* index, int n)
{
	for (int i = 0; i < n; ++i)
	{
		swap(arr[index[i]], arr[i]);
	}

	display(arr, n);
}

int main()
{
	int arr[] = {50, 40, 70, 60, 90};
	int index[] = {3,  0,  4,  1,  2};

	int n = sizeof(index) / sizeof(index[0]);

	rearrange(arr, index, n);
}