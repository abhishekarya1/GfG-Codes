// Smith Numbers = A Smith Number is a composite number whose sum of digits is equal to the sum of digits in its prime factorization.

// Link: https://www.geeksforgeeks.org/smith-number/

#include<iostream>
using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int sumDigits(int n)
{
	if ( n == 0) return 0;
	return (n % 10) + sumDigits(n / 10);
}

int sumPrimeFactors(int n)
{
	int sum = 0;
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			int a = 0;
			if (i > 9) a = sumDigits(i);
			else a = i;

			sum += a;
			n /= i;
		}
	}

	int a = 0;
	if (n > 9) a = sumDigits(n);
	else a = n;

	if (n > 1) sum += a;

	return sum;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		if (isPrime(n)) { cout << 0 << "\n"; continue; }

		int ans = (sumDigits(n) == sumPrimeFactors(n)) ? 1 : 0;
		cout << ans << "\n";
	}

	return 0;
}