// Superperfect Number = A superperfect number is a positive integer which satisfies σ(σ(n)) = 2*n, where σ is divisor summatory function.

// Link: https://www.geeksforgeeks.org/superperfect-number/

#include<bits/stdc++.h>
using namespace std;

int sigmaSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			sum += i;
	}

	return sum;
}

int main()
{
	int n;
	cin >> n;

	if (2 * n == sigmaSum(sigmaSum(n)))
		cout << "Yes";
	else cout << "No";

	return 0;
}