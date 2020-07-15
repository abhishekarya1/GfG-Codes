//Palindromic Prime = A number whose palindrome is also a prime

// Link: https://www.geeksforgeeks.org/palindromic-primes/

#include<bits/stdc++.h>

using namespace std;

bool isPal(int n)
{
	string num1 = to_string(n);
	string num = num1;
	reverse(num.begin(), num.end());

	if (num == num1)
		return true;
	else return false;
}

void sieve(int n, vector<int> &s)
{
	s[0] = s[1] = 0;
	for (int i = 2; i * i <= n; i++)
	{
		if (s[i])
		{
			for (int j = i * i; j <= n; j += i)
				s[j] = 0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> s(n + 1, 1);
	sieve(n, s);

	for (int i = 0; i < s.size(); i++)
		if (s[i] == 1)
			if (isPal(i))
				cout << i << " ";

	return 0;
}