// GCD using Stein's Algorithm (Binary GCD)

// Link: https://www.geeksforgeeks.org/steins-algorithm-for-finding-gcd/

//Time Complexity = O(n*n), where n is the number of bits in the larger number.

#include <bits/stdc++.h>
using namespace std;

int steinGCD(int a, int b)
{
	if (a == b) return a;

	if (a == 0) return b;
	if (b == 0) return a;

	if (~a & 1)     //a is even
	{
		if (b & 1)  //b is odd
			return steinGCD(a >> 1, b);
		else        // both are even
			return steinGCD(a >> 1, b >> 1) << 1;       // 2*gcd(a/2, b/2)
	}

	if (~b & 1)     // a is odd, b is even
		return steinGCD(a, b >> 1);

	// both odd
	if (a > b) return steinGCD((a - b) >> 1, b);
	else return steinGCD(a, (b - a) >> 1);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	cout << steinGCD(a, b);

	return 0;
}
