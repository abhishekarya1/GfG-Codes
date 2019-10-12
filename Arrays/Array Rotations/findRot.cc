#include<iostream>

using namespace std;

int main()
{
	int arr[] = {7, 9, 11, 12, 15};
	int n = sizeof(arr) / sizeof(arr[0]);

	int loc = -1;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > arr[i + 1]) loc = i;
	}

	int nRot = loc + 1;
	cout << nRot;
}