// Program to replace every element with the smallest element on its left side - Time complexity : O(n)
#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void rearrange(int*arr, int n)
{
	int min = arr[0];
	arr[0] = -1;

	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < min)
		{
			int t = arr[i];
			arr[i] = min;
			min = t;
		}

		else arr[i] = min;
	}
}

int main()
{
	int arr[] = {4, 5, 2, 1, 7, 6};

	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr, n);
	display(arr, n);
}