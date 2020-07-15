// Pernicious number = A positive integer which has prime number of ones in its binary representation. \
The first pernicious number is 3 since 3 = (11)(in binary representation) and 1 + 1 = 2, which is a prime.

// Link: https://www.geeksforgeeks.org/pernicious-number/

#include<bits/stdc++.h>

        using namespace std;

int countSetBits(int n)
{
	int count = 0;
	while (n > 0)
	{
		if (n & 1) count++;
		n >>= 1;
	}

	return count;
}

bool isPrime(int n)
{
	if (n == 0 || n == 1) return false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) return false;
	}

	return true;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 2; cnt < n; ++i)
	{
		if (isPrime(countSetBits(i)))
		{
			cout << i << " ";
			cnt++;
		}
	}

	return 0;
}