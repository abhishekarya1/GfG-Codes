// https://www.geeksforgeeks.org/rearrange-array-arri-arrj-even-arri/
// Program to rearrange the array such that elements at even positions are greater than all elements before it \
and elements at odd positions are less than all elements before it

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

void arrange(int* arr, int n)
{
	int *temp = new int[n];		// make a new array

	for (int i = 0; i < n; ++i)		// copy all elements into it
		temp[i] = arr[i];

	sort(temp, temp + n);		// sort the new array

	int evenPos = n / 2;
	int oddPos = n - evenPos;

	int j = oddPos - 1;				// fill decreasing on odd postions
	for (int i = 0; i < n; i += 2)
	{
		arr[i] = temp[j];
		j--;
	}

	j = oddPos;
	for (int i = 1; i < n; i += 2)	// fill increasing on even postions
	{
		arr[i] = temp[j];
		j++;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	arrange(arr, n);
	display(arr, n);
}