// Sophie-Germain Prime = If p is prime and 2p+1 is also a prime, then p is a sophie-germain prime.

// Link: https://www.geeksforgeeks.org/sophie-germain-prime/

#include <bits/stdc++.h>
using namespace std;

void sieve(int n, int* s)
{
	s[0] = 0;
	s[1] = 0;

	for (int i = 2; i * i <= n; ++i)
	{
		if (s[i])
		{
			for (int j = i * i; j <= n; ++j)
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
	cin >> n;

	int s[n + 1];
	memset(s, 1, sizeof(s));
	sieve(n, s);

	for (int i = 2; i < (n - 1) / 2; ++i)
	{
		if (s[i] == 1 && s[2 * i + 1] == 1)
			cout << i << " ";
	}

	return 0;
}