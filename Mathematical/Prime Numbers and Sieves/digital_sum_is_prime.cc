// Digital Sum is prime or not?

// Link: https://www.geeksforgeeks.org/recursive-sum-of-digits-of-a-number-is-prime-or-not/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;

	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}

	return true;
}

int Rec_sumOfDigits(int n)
{
	if(n == 0) return 0;
	return n%10 + Rec_sumOfDigits(n/10);
}

int sumOfDigits(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int digitalSum = sumOfDigits(n);

	if (isPrime(digitalSum))
		cout << "Yes";
	else cout << "No";

	return 0;
}