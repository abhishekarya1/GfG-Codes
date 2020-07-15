//Sophie Germain Prime =  prime number p is called a sophie prime number if 2p+1 is also a prime number.

// Link: https://www.geeksforgeeks.org/sophie-germain-prime/

#include<bits/stdc++.h>

using namespace std;

void sieve(int n, bool* s)
{
	s[0] = s[1] = false;
	for (int i = 2; i * i <= n; i++)
	{
		if (s[i])
		{
			for (int j = i * i; j <= n; j += i)
				s[j] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	bool s[2 * n + 1 + 1];
	memset(s, true, sizeof(s));
	sieve(2 * n + 2, s);

	for (int i = 2; i <=n; i++)
		if (s[i] == true && s[2 * i + 1] == true)
			cout << i << " ";

	return 0;
}