//Sum of largest prime factor of each number less than equal to n

//Link : https://www.geeksforgeeks.org/sum-largest-prime-factor-number-less-equal-n/

#include<iostream>

using namespace std;

int largestPrimeFactor(int n)
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
	int n;
	cin >> n;

	int sum = 0;
	for (int i = 2; i <= n; i++)
		sum += largestPrimeFactor(i);

	cout << sum;

	return 0;
}