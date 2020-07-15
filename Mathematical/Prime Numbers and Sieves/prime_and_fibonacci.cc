// Given a number, find the numbers (smaller than or equal to n) which are both Fibonacci and prime.

// Link: https://www.geeksforgeeks.org/prime-numbers-fibonacci/

#include <bits/stdc++.h>
using namespace std;

bool isSquare(int n)
{
	int root = sqrt(n);
	return (root * root == n);
}

// Prints all numbers less than or equal to n that
// are both Prime and Fibonacci.
void printPrimeAndFib(int n)
{

	int s[n + 1];
	memset(s, 1, sizeof(s));
	for (int i = 2; i * i <= n; i++) {
		if (s[i]) {
			for (int j = i * i; j <= n; j += i)
				s[j] = 0;
		}
	}

	// Now traverse through the range and print numbers
	// that are both prime and Fibonacci.

	// A number is Fibonacci if and only if one or both of (5*n^2 + 4) or (5*n^2 – 4) is a perfect square. 
	for (int i = 2; i <= n; i++)
		if (s[i] && (isSquare(5 * i * i + 4) == true ||
		             isSquare(5 * i * i - 4) == true))
			cout << i << " ";
}

int main()
{
	int n = 30;
	printPrimeAndFib(n);
	return 0;
}
