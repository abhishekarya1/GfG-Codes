// Prime an odd number as sum of prime. \
Given an odd number, we need to express it as the sum of at most three prime numbers.

// Link : https://www.geeksforgeeks.org/express-odd-number-sum-prime-numbers/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n % 2 == 0) return false;

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main()
{
	int n = 27;

	//Case 1 = n is a prime number
	if (isPrime(n)) cout << n << "\n";

	//Case 2 = n is not prime, n-2 is prime
	if (isPrime(n - 2)) cout << 2 << ", " << n - 2 << "\n";

	//Case 3 = n is not prime, neither is n-2, but n-3 is prime..if it is then (odd - odd = even) which can be further broken\
	into two primes (Goldbach's Conjecture)
	else
		{
			cout << 3 << ", ";
			
			n = n - 3;

			for (int i = 2; i <= n/2; ++i)
			{
				if(isPrime(i) && isPrime(n - i))
				{
					cout << i << ", " << (n - i);
					break;
				}
			}
		}


	return 0;
}
