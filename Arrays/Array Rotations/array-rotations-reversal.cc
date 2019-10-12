// Time Complexity - O(n)
#include<iostream>

using namespace std;

void reverse(int* arr, int l, int h)
{
	while (l < h)
	{
		swap(arr[l++], arr[h--]);
	}
}

void left_rotation(int* arr, int n, int k)
{
	reverse(arr, 0, k - 1);
	reverse(arr, k, n - 1);
	reverse(arr, 0, n - 1);
}

void right_rotation(int* arr, int n, int k)
{
	reverse(arr, 0, n - 1);
	reverse(arr, 0, k - 1);
	reverse(arr, k, n - 1);
}

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;

	display(arr, n);
	/*
	cout << endl;
	left_rotation(arr, n, k);
	display(arr, n);
	*/
	cout << endl;
	right_rotation(arr, n, k);
	display(arr, n);
}