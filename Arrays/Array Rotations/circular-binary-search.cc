// Program to serach in a rotated sorted array

#include<iostream>

using namespace std;

int circular_binary_search(int* arr, int n, int e)
{
	int l = 0, h = n - 1;
	while (l <= h)
	{
		int m = l + (h - l) / 2;

		if (e == arr[m]) return m;

		if (arr[m] <= arr[h])		// right half is sorted
		{
			if (e > arr[m] && e <= arr[h]) l = m + 1;
			else h = m - 1;
		}

		if (arr[m] >= arr[l])		// left half is sorted
		{
			if (e < arr[m] && e >= arr[l]) h = m - 1;
			else l = m + 1;
		}
	}
}

int main()
{
	int arr[] = {3, 4, 5, 1, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	int e = 4;
	cout << circular_binary_search(arr, n, e);
}