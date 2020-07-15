// Twisted Prime Number = A number is said to be twisted prime if it is a prime number and reverse of the number is also a prime number.

// Link: https://www.geeksforgeeks.org/twisted-prime-number/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	if (n == 0 || n == 1) return false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int reverseNum(int n)
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

	int rev = reverseNum(n);

	cout << (isPrime(n) && isPrime(rev));

	return 0;
}