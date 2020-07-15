// Special Prime (N) = (Sum of two consecutive primes less than N) + 1

// Link: https://www.geeksforgeeks.org/special-prime-numbers/

#include <iostream>
#include<vector>
using namespace std;

vector<int> primes;

void sievetoVector(int n)
{
	vector<int> s(n + 1, 1);

	s[0] = s[1] = 0;

	for (int i = 2; i <= n; i++) //i<=n, we want push_back till n and not sqrt(n)
	{
		if (s[i]) primes.push_back(i);

		for (int j = i * i; j <= n; j += i)
			s[j] = 0;
	}
}

int checkSpecial(int n)
{
	int count = 0;
	for (int i = 0; i < primes.size(); i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (primes[j] + primes[j + 1] + 1 == primes[i])
				count++;
		}
	}

	return count;
}

int main() {
	int n;
	//cin >> n;  27. 45
	sievetoVector(n);

	// for(int i=0;i<primes.size();i++) cout<<primes[i] << " ";
	int k;
	//cin >> k;  2, 7

	if (checkSpecial(n) >= k) cout << "YES";
	else cout << "NO";

}
