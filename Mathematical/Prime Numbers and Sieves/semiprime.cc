// Semiprime = A semiprime is a natural number that is a product of two prime numbers.

// Link: https://www.geeksforgeeks.org/check-whether-number-semiprime-not/

#include <bits/stdc++.h>
using namespace std;

//count total prime factors, if exactly 2, then semiprime, no otherwise.
bool checkSemiPrime(int n)
{
	int cnt = 0;
	for (int i = 2; cnt < 2 && i * i <= n; ++i)
	{
		while (n % i == 0)
		{
			cnt++;
			n /= i;
		}
	}

	if (n > 1)
		cnt++;

	return cnt == 2;
}


int main()
{
	int n = 25;
	if (checkSemiPrime(n)) cout << "True";
	else cout << "False";
	return 0;
}
