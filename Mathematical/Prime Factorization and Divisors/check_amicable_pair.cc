//Amicable Pair = Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number

//Link : https://www.geeksforgeeks.org/check-amicable-pair/

#include<iostream>

using namespace std;

int sumDiv(int n)
{
	int sum = 0;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			if (i * i == n) sum += i;
			else sum += i + (n / i);
		}
	}

	return sum + 1;
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;

	int ans = (sumDiv(n1) == n2 && sumDiv(n2) == n1) ? 1 : 0;

	cout << ans;

	return 0;
}