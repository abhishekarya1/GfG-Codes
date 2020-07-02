// Link : https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

// Program to segregate zeroes in O(n) time and O(1) space using Count Swap Method
#include<iostream>

using namespace std;

void seg_zero(int* arr, int n)
{
	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != 0) swap(arr[count++], arr[i]);
	}

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
	int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	seg_zero(arr, n);
	display(arr, n);
}
