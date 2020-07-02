// Link : https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// Program to reverse a array/string in O(n)
#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void reverse(int* arr, int n)
{
	int l = 0, h = n - 1;
	while (l < h)
	{
		swap(arr[l++], arr[h--]);
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	display(arr, n);
	reverse(arr, n);
	cout << endl;
	display(arr, n);
}
