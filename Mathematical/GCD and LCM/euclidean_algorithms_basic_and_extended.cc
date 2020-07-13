// Basic and Extended Euclidean Algorithms
//Link: https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/

#include <bits/stdc++.h>

int GCDEuclidean(int, int);
int extendedEuclidean(int, int, int&, int&);

using namespace std;

// Basic Euclidian Algotrithm
// O(log(min(a, b)))
int GCDEuclidean(int a, int b)
{
    if (b == 0) return a;

    return GCDEuclidean(b, a % b);
}

// int GCDEuclidean(int a, int b)
// {
//     if(a == 0) return b;

//     return GCDEuclidean(b%a, a);
// }

int extendedEuclidean(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1; y = 0;
        return a;
    }

    int x1, y1; // To store results of recursive call
    int gcd = extendedEuclidean(b, a % b, x1, y1);

    // Update x and y using results of
    // recursive call
    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    //cin>>a>>b;
    a = 12; b = 24;

    cout << GCDEuclidean(a, b);

    //Coefficients
    int x, y;
    cout << extendedEuclidean(a, b, x, y);

    return 0;
}