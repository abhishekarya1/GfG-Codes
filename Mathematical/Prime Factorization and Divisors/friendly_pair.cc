//Friendly Pair = Two numbers whose ratio of sum of divisors and number itself is equal.

//Link : https://www.geeksforgeeks.org/check-given-two-number-friendly-pair-not/

#include<iostream>

using namespace std;

int sumDiv(int n)
{
	int sum = 0;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			if (i * i == n) sum += i;
			else sum += i + (n / i);
		}
	}

	return sum + 1;
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;

	int ans = (sumDiv(n1) / n1 == sumDiv(n2) / n2) ? 1 : 0;

	cout << ans;

	return 0;
}