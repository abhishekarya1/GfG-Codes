//k-th prime factor of a given number

//Link : https://www.geeksforgeeks.org/k-th-prime-factor-given-number/

#include<iostream>

using namespace std;

int findkPrime(int n, int k)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            cnt++;
            if (cnt == k) return i;
            n /= i;
        }
    }

    if (n > 1) cnt++;
    if (cnt == k) return n;

    if (cnt < k) return -1;

    return 0;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << findkPrime(n, k);

    return 0;
}