// Link : https://www.geeksforgeeks.org/find-the-largest-three-elements-in-an-array/

// Find the largest three elements of an Array - O(n)

#include<iostream>
#include<climits>

using namespace std;

void largest_3(int* arr, int n)
{
	int first = INT_MIN;	// largest
	int second = INT_MIN;	// second largest
	int third = INT_MIN;	// third largest

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > first)
		{
			third = second;
			second = first;
			first = arr[i];
		}

		else if (arr[i] > second)
		{
			third = second;
			second = arr[i];
		}

		else if (arr[i] > third)
			third = arr[i];
	}

    cout << third << " " << second << " "<< first;
}

int main()
{
	int arr[] = {10, 4, 3, 50, 23, 90};
	int n = sizeof(arr) / sizeof(arr[0]);

	largest_3(arr, n);
}