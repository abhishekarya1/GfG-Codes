// Twin Prime = Two primes having difference of 2.

// Link: https://www.geeksforgeeks.org/twin-prime-numbers/

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

bool isTwinPrime(int n1, int n2)
{
	return (isPrime(n1) && isPrime(n2) && abs(n1 - n2) == 2);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n1, n2;
	cin >> n1 >> n2;


	int ans = isTwinPrime(n1, n2) ? 1 : 0;

	cout << ans;

	return 0;
}