// Hoax Number = A Hoax Number is defined as a composite number, whose sum of digits is equal to the sum of digits of its distinct prime factors.

// Link: https://www.geeksforgeeks.org/hoax-number/

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
	if (n == 0) return 0;
	return (n % 10) + sumDigits(n / 10);
}

bool checkHoax(int n)
{
	if (isPrime(n)) return false;
	int tmp = n;
	int sum = 0;
	for (int i = 2; i * i <= n; i++)
	{
		bool flag = true;
		while (n % i == 0)
		{
			if (flag == true) {flag = false; sum += i; }		//count only the first occurance of a prime factor
			n /= i;
		}
	}

	if (n > 1) sum += n;

	// convert Sum of factors to single digit sum
	int sumdigitfactor = sumDigits(sum);
	while (sumdigitfactor > 9)
	{
		sumdigitfactor = sumDigits(sumdigitfactor);
	}

	//convert sum of digits to single digit sum
	int sumdigit = sumDigits(tmp);
	while (sumdigit > 9)
	{
		sumdigit = sumDigits(sumdigit);
	}

	//assert condition
	return (sumdigitfactor == sumdigit);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int ans = checkHoax(n) ? 1 : 0;

		cout << ans << "\n";
	}

	return 0;
}