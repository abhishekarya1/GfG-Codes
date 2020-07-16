// Circular Prime

// Link: https://www.geeksforgeeks.org/check-whether-number-circular-prime-not/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;

	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int tmp = n, cnt = 0;

	while (tmp)
	{
		cnt += 1;
		tmp /= 10;
	}

	int m = n;
	while (true)
	{	cout << m << " ";
		if (!isPrime(m)) { cout << "No"; return 0;}
		int d = m % 10;
		m = pow(10, cnt - 1) * d + (m / 10);
		if (m == n) break;
	}

	cout << "Yes";
}