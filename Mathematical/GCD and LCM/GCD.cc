// GCD
//Link: https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
//Link: https://www.geeksforgeeks.org/gcd-two-array-numbers/

#include <bits/stdc++.h>

using namespace std;

// O(min(a, b))
int GCDbruteforce(int a, int b)
{
    int smaller = min(a, b);
    int larger = max(a, b);
    int maxFactor = 0;
    for (int i = 1; i <= smaller; i++)
    {
        if (larger % i == 0 && smaller % i == 0)
        {
            maxFactor = max(i, maxFactor);
        }
    }

    return maxFactor;
}

// O(max(a, b))
int GCDSubtraction(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;

    if (a > b) return GCDSubtraction(a - b, b);
    else return GCDSubtraction(a, b - a);
}

// O(log(min(a, b)))
int GCDEuclidean(int a, int b)
{
    if (b == 0) return a;

    return GCDEuclidean(b, a % b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    //cin>>a>>b;
    a = 12; b = 24;
    cout << GCDbruteforce(a, b);
    cout << GCDSubtraction(a, b);
    cout << GCDEuclidean(a, b);

    //GCD of whole Array
    int arr[] = {2, 4, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
        arr[i + 1] = __gcd(arr[i], arr[i + 1]);

    cout << "GCD of array is: " << arr[n - 1];

    return 0;
}