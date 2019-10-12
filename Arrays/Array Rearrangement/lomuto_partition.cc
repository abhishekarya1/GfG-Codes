// Program to partition array such that even numbers and odd numbers are segregated using Lomuto's Partition Scheme - Time Complexity = O(n)
#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void lomuto(int*arr, int n)
{
	int i = 0, j = 0;

	while (j < n)
	{
		if (arr[j] % 2 == 0)		// if even number then set to front position tracked by i
		{
			swap(arr[i], arr[j]);
			i++;
		}

		j++;						// check every element for even using j
	}
}

int main()
{
	int arr[] = {1, 3, 2, 4, 7, 6, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	lomuto(arr, n);
	display(arr, n);
}