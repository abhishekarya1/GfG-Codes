// Prime Factorization using Sieve in O(log n) time

// Link: https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/

#include<bits/stdc++.h>
using namespace std;

void factorSieve(int n, bool* s, int* spf)
{
	s[0] = s[1] = false;
	spf[0] = spf[1] = 1;
	for (int i = 2; i * i <= n; i++)
	{
		if (s[i])
		{
			spf[i] = i;
			for (int j = i * i; j <= n; j += i)
			{
				s[j] = false;
				spf[j] = i;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;

	bool s[n + 1];
	int spf[n + 1];
	memset(s, true, sizeof(s));

	factorSieve(n, s, spf);

	while (n != 1)
	{
		cout << spf[n] << " ";
		n /= spf[n];
	}

	return 0;
}