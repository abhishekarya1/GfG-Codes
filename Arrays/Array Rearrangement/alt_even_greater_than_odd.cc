// https://www.geeksforgeeks.org/rearrange-array-such-that-even-positioned-are-greater-than-odd/
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

int* rearrange(int* arr, int n)
{
	int* temp = new int[n];

	sort(arr, arr + n);

	int l = 0, h = n - 1;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			temp[i] = arr[h--];
		}

		else
			temp[i] = arr[l++];
	}

	return temp;
}

int main()
{
	int arr[] = {1, 3, 2, 2, 5};

	int n = sizeof(arr) / sizeof(arr[0]);

	int* t = rearrange(arr, n);
	display(t, n);
	delete t;
}