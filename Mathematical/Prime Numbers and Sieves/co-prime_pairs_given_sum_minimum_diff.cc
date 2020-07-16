// Co-prime pair with given sum minimum difference \

// Link: https://www.geeksforgeeks.org/co-prime-pair-with-given-sum-minimum-difference/

#include <bits/stdc++.h>
using namespace std;

bool checkCoprime(int a, int b)
{
	return (__gcd(a, b) == 1);
}

void pairSum(int n) {

	int mid = n / 2;

	for (int i = mid; i >= 1; i--) {
		if (checkCoprime(i, n - i)) {
			cout << i << " " << n - i;
			break;
		}
	}
}

int main()
{
	int n = 11;
	pairSum(n);
	return 0;
}
