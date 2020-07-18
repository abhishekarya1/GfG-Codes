//Largest Prime Factor of a number

//Link : https://www.geeksforgeeks.org/find-largest-prime-factor-number/

#include<iostream>

using namespace std;

int findLargestPrime(int n, int k)
{
	int largest = 1;
	for (int i = 2; i * i <= n; ++i)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 1) largest = n;

	return largest;
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout << findLargestPrime(n, k);

	return 0;
}