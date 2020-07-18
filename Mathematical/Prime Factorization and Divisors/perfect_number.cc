// Perfect Number = A number whose perfect divisors' sum equals the number itself. Ex 6 = 1 + 2 + 3.

// Link : https://www.geeksforgeeks.org/perfect-number/

#include<iostream>

#define ll long long int

using namespace std;

bool isPerfect(ll n)
{
	ll sum = 1;		//sum as 1 because we don't want to add n since (n/i) when i=1 is n itself
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i * i == n) sum += i;		//for cases like n=16, i=(n/i)=4 will be added twice if not for this
			else sum += i + (n / i);
		}
	}

	return (n == sum && n != 1);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;

		int ans = isPerfect(n) ? 1 : 0;

		cout << ans << "\n";
	}
	return 0;
}