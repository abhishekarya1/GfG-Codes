// Program to partition array such that even numbers and odd numbers are segregated - Time Complexity = O(n)
#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void segregate(int*arr, int n)
{
	int l = 0, h = n - 1;
	while (l < h)
	{
		if (!(arr[l] & 1)) l++;
		if (arr[h] & 1) h--;
		else
		{	swap(arr[l], arr[h]);
			l++;
			h--;
		}
	}
}

int main()
{
	int arr[] = {12, 34, 45, 9, 8, 90, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	segregate(arr, n);
	display(arr, n);
}