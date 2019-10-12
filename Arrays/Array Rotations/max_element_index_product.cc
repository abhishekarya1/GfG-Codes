// Program to check maximum product rotation (i*arr[i]) in O(n) time
#include<iostream>

using namespace std;

int max_prod(int* arr, int n)
{
	int arrSum = 0, curSum = 0;
	for (int i = 0; i < n; ++i)
	{
		arrSum += arr[i];
		curSum += i * arr[i];	// R0 is calculated here alongwith arrsum = arr[0] + arr[1] + arr[2] + ... arr[n-1]
	}

	int maxSum = 0;

	for (int i = 1; i < n; ++i)
	{
		curSum += arrSum - (n * arr[n - i]);	// Successive R1, R2, ... can be calculated in O(1) using this formula
		if (curSum > maxSum) maxSum = curSum;
	}

	return maxSum;
}

int main()
{
	int arr[] = {2, 3, 5, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << max_prod(arr, n);
}