// GCD of floating point numbers
// Link: https://www.geeksforgeeks.org/program-find-gcd-floating-point-numbers/

#include <bits/stdc++.h>

using namespace std;

double floatGCD(double a, double b)
{
	if (fabs(b) < 0.001)
		return a;

	return floatGCD(b, a - floor(a / b) * b);
}

int main()
{
	double a = 0.48, b = 0.108;
	cout << floatGCD(a, b);
	return 0;
}
