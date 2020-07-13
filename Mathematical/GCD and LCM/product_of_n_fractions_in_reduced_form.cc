// Product of N fractions in reduced form

//Link: https://www.geeksforgeeks.org/product-given-n-fractions-reduced-form/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int num[n], den[n];

    for (int i = 0; i < n; ++i)
    {
    	cin>>num[i];
    }

    for (int i = 0; i < n; ++i)
    {
    	cin>>den[i];
    }

   	int prod = 1, prod2 = 1;
    for (int i = 0; i < n; ++i)
    {
    	prod = prod * num[i];
        prod2 = prod2 * den[i];
    }

    int gcd = __gcd(prod, prod2);
    int numAns = prod / gcd;
    int numDen = prod2 / gcd;

    cout<<numAns<<"/"<<numDen;

    return 0;
}						