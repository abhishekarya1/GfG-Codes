// Sexy Prime

// Link: https://www.geeksforgeeks.org/sexy-prime/

#include<bits/stdc++.h>

using namespace std;

void sieve(int n, bool* s)
{
	s[0] = s[1] = 0;
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
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l, r;
	cin >> l >> r;

	bool s[r + 1];
	memset(s, true, sizeof(s));

	sieve(r, s);

	for (int i = l; i < r - 6; ++i)
	{
		if (s[i] && s[i + 6])
			cout << i << ", " << i + 6 << "\n";
	}

	return 0;
}