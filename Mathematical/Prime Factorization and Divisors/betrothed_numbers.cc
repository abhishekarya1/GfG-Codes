// Betrothed Numbers => sum2 = n1+1 and sum1 = n2+1

// Link : https://www.geeksforgeeks.org/betrothed-numbers/

#include<iostream>

using namespace std;

int sumDivisors(int n)
{
	int sum = 1;
	for (int i = 2; i * i <= n; ++i)
	{
        if(n % i == 0)
		{
            if (i * i == n) sum += i;
		    else sum += i + (n / i);
        }
	}

	return sum;
}

int main()
{
	int n;
    cin >> n;

	//take a number and sum its proper divisors, we get n2 = sum1 - 1 and check this
	for (int n1 = 1; n1 < n; ++n1)
	{
		int sum1 = sumDivisors(n1);
        if (sum1 > i)   //to avoid duplicates
        int n2 = sum1 - 1;
		if (sumDivisors(n2) == n1+1)
			cout << n1 << " " << n2 << endl;
	}

	return 0;
}