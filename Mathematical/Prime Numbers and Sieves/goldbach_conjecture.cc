// Goldbach's Conjecture = Every even integer greater than 2 can be expressed as the sum of two primes.

// Link : https://www.geeksforgeeks.org/program-for-goldbachs-conjecture-two-primes-with-given-sum/

#include <bits/stdc++.h>
using namespace std;

void sieve(bool* s, int n)
{
	s[0] = s[1] = false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (s[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				s[j] = false;
			}
		}
	}
}

int main()
{
	int n = 38;

	bool s[n + 1];
	memset(s, true, sizeof(s));

	sieve(s, n);

	//assert if odd
	if (n & 1 || n <= 2)
	{
		cout << "Invalid Input";
		return 0;
	}

	//check sum
	for (int i = 2; i <= n / 2; ++i)
	{
		if (s[i] && s[n - i] && i != n - i)
			cout << i << " + " << n - i << "\n";
	}

	return 0;
}
