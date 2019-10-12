// Program to segregate zeroes using Lomuto's Partitioning O(n)
#include<iostream>

using namespace std;

void seg_zero(int* arr, int n)
{
	int i = 0, j = 0;
	while (j < n)
	{
		if (arr[j] != 0)
		{
			swap(arr[i], arr[j]);
			i++;
		}

		j++;
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
	int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	seg_zero(arr, n);
	display(arr, n);
}