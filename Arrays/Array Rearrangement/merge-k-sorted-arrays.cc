// Link : https://www.geeksforgeeks.org/merge-k-sorted-arrays/

// Merge k sorted arrays

#include<iostream>
#include<algorithm>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void merge(int *arr1, int *arr2, int m, int n)
{
	int i = 0, j = 0, k = 0;

	int temp[m + n];

	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j])
			temp[k++] = arr1[i++];
		else if (arr1[i] > arr2[j])
			temp[k++] = arr2[j++];
		else
			temp[k++] = arr1[i++];
	}

	for (; i < m; ++i)
	{
		temp[k++] = arr1[i++];
	}

	for (; j < n; ++j)
	{
		temp[k++] = arr2[j++];
	}

    display(temp, sizeof(temp)/sizeof(temp[0]));

}

int main()
{
	int arr1[] = {1, 4, 5, 7};
	int arr2[] = {2, 3, 6};

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2 , m, n);
}