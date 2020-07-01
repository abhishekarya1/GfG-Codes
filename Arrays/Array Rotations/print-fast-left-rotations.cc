// Program to print Fast Rotations of array in O(n) time and O(1) space
#include<iostream>

using namespace std;

void print_left_rotation(int* arr, int n, int k)
{
	for (int i = k; i < n + k; ++i)
	{
		cout << arr[i % n] << " ";
	}
}

//doesn't work
void print_right_rotation(int* arr, int n, int k)
{
	for (int i = n - k; i < 2 * n - k; ++i)
	{
		cout << arr[i % n] << " ";
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;

	print_left_rotation(arr, n, k);
	cout << endl;
	print_right_rotation(arr, n, k);

}
