// Link : https://www.geeksforgeeks.org/find-elements-array-least-two-greater-elements/

// Given an array of n distinct elements, the task is to find all elements in array which have at-least two greater elements than themselves - O(n)


// Solution: Find the second largest element and check if our number is less than that. If it is then print it.

#include<iostream>
#include<climits>

using namespace std;

void less_than_second_largest(int* arr, int n)
{
	int first = INT_MIN;	// largest
	int second = INT_MIN;	// second largest

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > first)
		{
			second = first;
			first = arr[i];
		}

		else if (arr[i] > second)
		{
			second = arr[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < second)
		{
			cout << arr[i] << " ";
		}
	}


}

int main()
{
	int arr[] = {2, 8, 7, 1, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	less_than_second_largest(arr, n);
}