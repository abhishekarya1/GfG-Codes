// Program to replace every element with the greatest element on its left side - Time complexity : O(n)
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
	int max = -1;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > max)
		{
			int t = arr[i];
			arr[i] = max;
			max = t;
		}

		else arr[i] = max;
	}
}

int main()
{
	int arr[] = {4, 5, 2, 1, 7, 6};

	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr, n);
	display(arr, n);
}