// k-Rough Number or k-Jagged Number = A k-rough or k-jagged number is a number whose smallest prime factor is greater than or equal to the number ‘k’

// Link : https://www.geeksforgeeks.org/k-rough-number-k-jagged-number/

#include<iostream>

using namespace std;

int smallestPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
        if(n % i == 0)
		{
           return i;
        }
	}

    if(n > 1) return n;
}

int main()
{
	int n, k;
    cin >> n >> k;

    if(smallestPrime(n) >= k)
    cout << "Yes";
    else cout << "No"; 

	return 0;
}