// Balanced Prime => Prime (p) = (sum of its neighbours / 2)

// Link: https://www.geeksforgeeks.org/balanced-prime/

#include<bits/stdc++.h>

using namespace std;

vector<int> primes;

void sieveArbitrarySize()
{
	int s[500 + 1];
	memset(s, true, sizeof(s));

	for (int i = 2; i <= 500; ++i)
	{
		if (s[i])
		{
			primes.push_back(i);
			for (int j = i * i; j <= 500; j += i)
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

	sieveArbitrarySize();

	int cnt = 0, i = 0;
	for (; cnt != n; ++i)
	{
		if (float(primes[i] + primes[i + 2]) / 2 == primes[i + 1]) cnt++;		//notice the float
	}

	--i;
	cout << primes[i + 1];

	return 0;
}