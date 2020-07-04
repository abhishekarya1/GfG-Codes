// Link : https://www.geeksforgeeks.org/find-a-sorted-subsequence-of-size-3-in-linear-time/

// Given an array of n integers, find the 3 elements such that a[i] < a[j] < a[k] and i < j < k in 0(n) time. If there are multiple such triplets, then print any one of them.

//Approach : Find smaller element on left and greater on right for each element of array and store it. \
Print the first element for which both smaller and greater exists, then return.


// Time complexity = O(n), Space complexity = O(n)

#include<iostream>
#include<climits>

using namespace std;

void find_any_one_triplets(int* arr, int n)
{
	int smaller[n];
	int greater[n];

	int min = arr[0];
	int max = arr[n - 1];

	smaller[0] = -1;
	greater[n - 1] = -1;

	for (int i = 1; i < n; ++i)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
			smaller[i] = -1;
		}
		else
			smaller[i] = min;
	}

	for (int i = n - 2; i >= 0; --i)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
			greater[i] = -1;
		}
		else
			greater[i] = max;
	}

	for (int i = 0; i < n ; ++i)
	{
		if (smaller[i] != -1 && greater[i] != -1)
		{
			cout << smaller[i] << " " << arr[i] << " " << greater[i];
			return;
		}
	}

	cout << "No such triplet found";

}

int main()
{
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	find_any_one_triplets(arr, n);
}