// Count all perfect divisors of a number

// Link: https://www.geeksforgeeks.org/count-perfect-divisors-number/

#include<bits/stdc++.h>

using namespace std;

bool isSquare(int n)
{
	int root = sqrt(n);
	return root * root == n;
}

int countDiv(int n)
{
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0 && isSquare(i))
			cnt++;
	}

	return cnt;
}

int main()
{
	int n;
	cin >> n;

	cout << countDiv(n);

	return 0;
}