// Sphenic Number = A Sphenic Number is a positive integer which is product of exactly three distinct primes. The first few sphenic numbers are 30, 42, 66, 70, 78, 102, 105, 110, 114, ...

// Link: https://www.geeksforgeeks.org/sphenic-number/

#include<iostream>
using namespace std;
bool checkSphenic(int n)
{
	int cnt = 0;
	for (int i = 2; i * i <= n; i++)
	{
		bool flag = true;
		while (n % i == 0)
		{
			if (flag == true) {flag = false; cnt++; }		//count only the first occurance of a prime factor
			n /= i;
		}
	}

	if (n > 1) cnt++;

	return cnt == 3;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int ans = checkSphenic(n) ? 1 : 0;

		cout << ans << "\n";
	}

	return 0;
}