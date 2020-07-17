// Blum Integer = A Semiprime having two prime factors, both of the from 4t+3

// Link: https://www.geeksforgeeks.org/blum-integer/

#include<bits/stdc++.h>
using namespace std;

void sieve(int n, bool* s)
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

bool checkBlum(int n, bool* s)
{

	for (int i = 2; i <= n; ++i)
	{
		//check form of both first factor and quotient when divided with n
		if (n % i == 0)
		{
			int q = n / i;
			if (q != i && s[q] == true && (i - 3) % 4 == 0 && (q - 3) % 4 == 0)
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	int n;
	cin >> n;

	bool s[n + 1];
	memset(s, true, sizeof(s));
	sieve(n, s);

	if (checkBlum(n, s)) cout << "Yes";
	else cout << "No";

	return 0;
}