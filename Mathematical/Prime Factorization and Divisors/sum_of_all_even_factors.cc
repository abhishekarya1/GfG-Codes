// Sum of all even factors (using formula)

// Link: https://www.geeksforgeeks.org/find-sum-even-factors-number/

#include<iostream>
#include<cmath>
using namespace std;

int sumevenFactors(int n)
{
	int sum = 0, ans = 1;

	//find all prime factors
	for (int i = 2; i <= n; ++i)
	{
		sum = 0;
		int p = 1;
		while (n % i == 0)
		{
			n /= i;
			sum += pow(i, p);
			p++;
		}

		if (i == 2) ans *= sum;       // i is even, we skip 0th power in 2 only
		else ans *= sum + 1;        // i is odd
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	cout << sumevenFactors(n);

	return 0;
}