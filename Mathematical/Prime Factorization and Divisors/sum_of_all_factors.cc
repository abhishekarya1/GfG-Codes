// Sum of all factors (using formula) \
Formula =>  N = (2^m * 3^n * 7^p) => Sum = (2^0 + 2^1 + ... + 2^m) * (3^0 + 3^1 + ... + 3^n) * (7^0 + 7^1 + ... + 7^p) 

// Link: https://www.geeksforgeeks.org/sum-factors-number/

#include<iostream>
#include<cmath>
using namespace std;

int sumFactors(int n)
{
	int sum = 0, ans = 1;

	//find all prime factors
	for (int i = 2; i <= n; ++i)
	{
		sum = 0;
		int p = 1;		// power goes from 0 to highest, but one iteration means power is 1 (zero to one) 
		while (n % i == 0)
		{
			n /= i;
			sum += pow(i, p);
			p++;
		}
		ans *= sum + 1;	 // adding 1 because we left power 0
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	cout << sumFactors(n);

	return 0;
}