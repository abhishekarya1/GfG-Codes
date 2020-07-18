// Link : https://www.geeksforgeeks.org/aliquot-sequence

// Lemoine’s Conjecture = Any odd integer greater than 5 can be expressed as a sum of an odd prime (all primes other than 2 are odd) and an even semiprime. \
A semiprime number is a product of two prime numbers.

#include<iostream>

using namespace std;

void sieve(int n, bool* s)
{
    s[0] = s[1] = false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (s[i])
            for (int j = i * i; j <= n; j += i)
            {
                s[j] = false;
            }
    }
}

bool checkSemiPrime(int n, bool* s)
{
    for (int i = 2; i <= n; ++i)
    {
        if (s[i] && n % i == 0 && s[n / i])
            return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    bool s[n + 1];
    memset(s, true, sizeof(s));
    sieve(n, s);

    //assert number is greater than 5
    if (n <= 5) { cout << "Not Possible"; return 0; }

    //check sum pair for each prime in sieve alongwith conjecture conditions
    for (int i = 2; i <= n - 2; ++i)
    {
        if (i != 2 && s[i] && (n - i) % 2 == 0 && checkSemiPrime(n - i, s))
        {
            cout << i << ", " << n - i << endl;
        }
    }

    return 0;
}