// Powerful Number = For every prime factor p of it, p^2 also divides it

// Link: https://www.geeksforgeeks.org/powerful-number/

#include<bits/stdc++.h>
using namespace std;

bool checkPowerful(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)		//if prime factor p is there
		{
			if (n % (i * i) != 0) return false;	//check for p*p divisibility

			while (n % i == 0)		//remove all of p from n
			{
				n /= i;
			}
		}
	}

	if (n > 1)  //in this case, remaining is always n which anyways can't be divided by n*n
	{
		return false;
	}

	return true;
}

int main()
{
	int n;
	cin >> n;

	if (checkPowerful(n))
		cout << "Yes";
	else cout << "No";

	return 0;
}