// Program to rearrange positive and negative numbers alternatively - Time: O(n), Space: O(1)
#include<iostream>
using namespace std;

void rearrange(int* arr, int n)
{
	/*	int l = 0, h = 1;
		while (h < n && l < n)
		{
			while (l < n && arr[l] >= 0) l += 2;
			while (h < n && arr[h] < 0) h += 2;
			if (h < n && l < n)
			{	swap(arr[l], arr[h]);
				l += 2;
				h += 2;
			}
		}*/				// This has problem with corner case - {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}; // Output = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

	int l = 0, h = n - 1;
	while (l < h)
	{
		while (arr[l] >= 0) l++;
		while (arr[h] < 0) h--;
		if (l < h)
		{
			swap(arr[l], arr[h]);
			l++;
			h--;
		}
	}

	// 1. Segregated positive and negative elements, and l points to the leftmost negative element

	if (l == 0 || l == n) 	// single element or no negative elements
        return;

    // 2. Rearrange negatives to alternate positions in array
	int k = 1;
	while (l < n)			// or (k < n && l < n)
	{
		swap(arr[k], arr[l]);
		k += 2;
		l += 1;
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
	int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8};		// Output = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr, n);
	display(arr, n);
}