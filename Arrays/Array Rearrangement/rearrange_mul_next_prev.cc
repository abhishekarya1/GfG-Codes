// Program to rearrange array such that every element is multiplication of next and previous - Time Complexity = O(n)
// a[0] = a[0] * a[1] and a[n-1] = a[n-1]*a[n-2]

#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void multiply_rearrange(int* arr, int n)
{
	int prev = arr[0];
	int cur = 0;
	arr[0] = arr[0] * arr[1];
	for (int i = 1; i < n - 1; ++i)
	{
		cur = arr[i];

		arr[i] = prev * arr[i + 1];

		prev = cur;
	}

	arr[n - 1] = prev * arr[n - 1];
}

int main()
{
	int arr[] = {2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	multiply_rearrange(arr, n);
	display(arr, n);
}