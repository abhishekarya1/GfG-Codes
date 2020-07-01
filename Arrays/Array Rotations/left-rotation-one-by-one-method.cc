// Left Rotation by k postions (one-by-one method)
#include<iostream>

using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int k;
	cin >> k;

	//do it k times	-- O(k)
	for (int i = 0; i < k; ++i)
	{
		//extract element from the start
		int e = arr[i];

		//shift rest of the elements -- O(n)
		for (int j = 0; j < size - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}

		//insert extracted element back at the end
		arr[size - 1] = e;
	}	

	//print array
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
}
