// Fisher–Yates shuffle Algorithm : O(n) time complexity, O(1) space complexity

#include<iostream>
#include<algorithm>
#include<string>
#include<time.h>

using namespace std;

void printArr(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

void shuffle(int* arr, int n)
{

	srand(time(NULL)); 	// seed

	for (int i = 0; i < n; ++i)		// loop through the array
	{
		int j = rand() % (i + 1);		// index picked from from 0 to i

		swap(arr[i], arr[j]);			// swap
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	int n = sizeof(arr) / sizeof(arr[0]);

	shuffle(arr, n);

	printArr(arr, n);
}