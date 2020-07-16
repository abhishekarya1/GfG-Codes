// Emirp = Reverse of a prime is also a prime.

// Link: https://www.geeksforgeeks.org/check-given-number-emirp-number-not/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int reverse(int n)
{
	int d = 0, rev = 0;
	while (n)
	{
		d = n % 10;
		rev = rev * 10 + d;
		n /= 10;
	}

	return rev;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int reverseNum = reverse(n);

	//assert reverseNum != n (exclude palindromic primes)
	if (reverseNum == n)
	{
		cout << "No"; return 0;
	}

	if (isPrime(reverseNum) && isPrime(n))
		cout << "Yes";
	else cout << "No";

	return 0;
}