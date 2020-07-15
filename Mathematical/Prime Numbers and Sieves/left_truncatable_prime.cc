// A Left-truncatable prime is a prime which in a given base (say 10) does not contain 0 and which remains prime when the leading ("left") digit is successively removed. \
For example, 317 is left - truncatable prime since 317, 17 and 7 are all prime. \
There are total 4260 left - truncatable primes.

// Link: https://www.geeksforgeeks.org/left-truncatable-prime/

#include <bits/stdc++.h>
using namespace std;

void sieve(int n, int* s)
{
	s[0] = s[1] = 0;
	for (int i = 2; i <= n; ++i)
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
	cin >> n;

	int s[n + 1];
	memset(s, 1, sizeof(s));
	//create sieve in s array
	sieve(n, s);

	//check number
	if (s[n] == false) {cout << "No"; return 0;}

	//truncate from left and check
	int i = 0, new_num = 0;
	while (n > 10)
	{
		int digit = n % 10;
		if (digit == 0) { cout << "No"; return 0; }
		new_num += digit * pow(10, i);
		n /= 10;
		i++;

		if (s[new_num] == false) {cout << "No"; return 0;}
	}

	cout << "Yes";
	return 0;
}