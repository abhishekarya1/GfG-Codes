// Program to find number of rotations in circular sorted array using modified Binary Search - O(log n)
// We find the minimum element (pivot) and its index is our answer
#include<iostream>

using namespace std;

int countRotations(int* arr, int l, int h)
{
	if (l == h) return l;	//single element in array
	if (arr[l] < arr[h]) return l;	// straight sorted array

	int m = l + (h - l) / 2;

	if (m < h && arr[m] > arr[m + 1]) return m + 1;		// mid is not equal to high, and cases like - {3, 4, 5, 1, 2}
	if (m > l && arr[m] < arr[m - 1]) return m;			// mid is not equal to low, and cases like - {4, 5, 1, 2, 3}

	if (arr[m] < arr[h])	// this true will mean that arr[m+1 ... h] is sorted
		return countRotations(arr, l, m - 1);	// we avoid it because fully sorted part can't contain our pivot
	else return countRotations(arr, m + 1, h);	
}

int main()
{
	int arr[] = {12, 15, 7, 9, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << countRotations(arr, 0, n - 1);
}