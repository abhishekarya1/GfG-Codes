// School prime check and sieve of eratosthenes

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

bool schoolPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main() {
	int n = 100;

	sievetoVector(n);

	for (int i = 0; i < primes.size(); i++) cout << primes[i] << " ";

	int ans = schoolPrime(7) ? 1 : 0;
	cout << "\n" << ans << "\n";

	ans = schoolPrime(9) ? 1 : 0;
	cout << ans;
}
