// Program to rearrange array elements such that arr[i] = i. Time Complexity = O(n)
#include<iostream>

using namespace std;

int main()
{
	int arr[] = { -1, -1, 6, 1, 9, 4, 2, -1, 3, -1};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n;)
	{
		if (arr[i] >= 0 && arr[i] != i)
		{
			swap(arr[arr[i]], arr[i]);		// this is like placing i on arr[i] one by one 
		}

		else i++;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}