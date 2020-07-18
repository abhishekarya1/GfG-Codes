//Find minimum sum of factors of number = Minimum sum of factors is when factors are minimum (i.e. prime factors)

//Link : https://www.geeksforgeeks.org/find-minimum-sum-factors-number/

#include<iostream>

using namespace std;

int sumPrimeFactors(int n)
{
	int sum = 0;
	for (int i = 2; i * i <= n; ++i)
	{
		while (n % i == 0)
		{
			sum += i;
			n /= i;
		}
	}

	if (n > 1) sum += n;

	return sum;
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout << sumPrimeFactors(n);

	return 0;
}