// Program to segregate 0s and 1s in O(n) time and O(1) space using Count Swap Method [Lomuto's Partition Scheme]
#include<iostream>

using namespace std;

void seg(int* arr, int n)
{
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 0)
		{
			swap(arr[cnt++], arr[i]);
		}
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
	int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	seg(arr, n);
	display(arr, n);
}