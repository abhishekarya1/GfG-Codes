// Find all Mersenne Primes less than equal to N. Mersenne primes are of the form 2^k - 1, for some integer k.

// Link: https://www.geeksforgeeks.org/mersenne-prime/

#include <bits/stdc++.h>
using namespace std;

void sieve(int n, int* s)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (s[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				s[j] = 0;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;       //31

	int s[n + 1];
	memset(s, 1, sizeof(s));

	sieve(n, s);

	//generate numbers of form 2^k-1 and check if they're marked in sieve
	for (int k = 2; (1 << k) - 1 <= n; k++)
	{
		long num = (1 << k) - 1;

		if (s[num])
			cout << num << " ";
	}

	return 0;
}