// Print the array in the order – \
smallest number, Largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on... \
Time = O(n), Space = O(n)
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

void rearrange(int* arr, int n)
{
	sort(arr, arr + n);
	int l = 0, h = n - 1;
	int* temp = new int[n];
	int i = 0;
	while (l <= h)
	{
		if (i & 1)
			temp[i++] = arr[h--];
		else
			temp[i++] = arr[l++];
	}

	display(temp, n);
	delete temp;
}

int main()
{
	int arr[] = {5, 8, 1, 4, 2, 9, 3, 7, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr, n);

}