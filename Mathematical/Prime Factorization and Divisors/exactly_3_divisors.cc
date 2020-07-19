// Find n with exactly 3 divisors = Only primes squared have 3 divisors, 1, p and p^2

//Link: https://www.geeksforgeeks.org/numbers-exactly-3-divisors/

#include<bits/stdc++.h>

#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void sieve(int n, bool* s)
{
	s[0] = s[1] = false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (s[i] == true)
		{
			for (int j = i * i; j <= n; j += i)
				s[j] = false;
		}
	}
}

int main()
{
	SPEED

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		bool s[n + 1];
		memset(s, true, sizeof(s));

		sieve(n, s);
		int cnt = 0;
		for (int i = 2; i * i <= n; i++)
		{
			if (s[i] == true)
				cnt++;
		}

		cout << cnt << "\n";
	}


	return 0;
}