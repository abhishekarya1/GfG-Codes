// Super-prime numbers (also known as higher order primes) are the subsequence of prime numbers that occupy prime-numbered positions within the sequence of all prime numbers. \
First few Super - Primes are 3, 5, 11 and 17. \
The task is to print all the Super - Primes less than or equal to the given positive integer N.

// Link: https://www.geeksforgeeks.org/super-prime/

#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void sieve(int n, vector<int> &s)
{
	s[0] = s[1] = 0;
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
	int n;
	cin >> n;       //17

	vector<int> s(n + 1, 1);

	sieve(n, s);

	//load primes from sieve to vector of primes
	for (int i = 2; i <= n; i++)
	{
		if (s[i] == 1)
			primes.push_back(i);
	}

	for (int i = 0; i < primes.size(); i++)
	{
		if (s[i + 1] == 1)  //1 based indexing
			cout << primes[i] << " ";
	}

	return 0;
}