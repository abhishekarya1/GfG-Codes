// Link : https://www.geeksforgeeks.org/double-first-element-move-zero-end/

// Convert the array in such a way that if next number is a valid number and same as current number, \
double its value and replace the next number with 0. \
After the modification, rearrange the array such that all 0s are shifted to the end \
Time Complexity = O(n)
#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void rearrange(int *arr, int n)
{
	for (int i = 0; i < n; ++i)			// 1. modify array elements as stated --- O(n)
	{
		if (arr[i] == arr[i + 1])
		{
			arr[i] += arr[i];
			arr[i + 1] = 0;
		}
	}

	int count = 0;

	for (int i = 0; i < n; ++i)			// 2. segregate usng Lomuto's Scheme --- O(n)
	{
		if(arr[i] != 0)
		{
			swap(arr[count++], arr[i]);
		}
	}
}

int main()
{
	int arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr, n);
	display(arr, n);
}
