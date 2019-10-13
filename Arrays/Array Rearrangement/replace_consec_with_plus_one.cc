// Program to replace two consecutive numbers by plus one - O(n^2)
#include<iostream>

using namespace std;

void display(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

int rearrange(int* arr, int n)			// return new array length = lim
{
	for (int i = 0; i < n; )
	{
		if (arr[i] == arr[i + 1])
		{
			arr[i] += 1;

			for (int j = i + 1; j < n - 1; ++j)		// Shift elements to the left
				arr[j] = arr[j + 1];

			n -= 1;					// reduce new array size by one
			i -= 1;					// go back one step to check again, this alleviates the need for re-traversing from the start
		}

		else i++;					// if no consecutive elements then proceed forward as usual
	}

	return n;						// return new array length
}

int main()
{
	int arr[] = {4, 5, 11, 2, 5, 7, 2};
	int n = sizeof(arr) / sizeof(arr[0]);

	int lim = rearrange(arr, n);
	display(arr, lim);
}