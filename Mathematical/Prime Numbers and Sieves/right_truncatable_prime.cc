// Right-Truncatable Prime

// Link: https://www.geeksforgeeks.org/right-truncatable-prime/

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

	int n;
	cin >> n;

	bool s[n + 1];
	memset(s, true, sizeof(s));

	sieve(n, s);

	//assert that number doesn't contain 0
	int d = 0, tmp = n;
	while (tmp)
	{
		if (tmp % 10 == 0) {cout << "No"; return 0;}
		tmp /= 10;
	}

	//truncate from right and check on each step
	while (n)
	{
		if (s[n] != true) { cout << "No"; return 0;}
		n /= 10;
	}

	cout << "Yes";

	return 0;
}