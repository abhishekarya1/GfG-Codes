// LCM
//Link: https://www.geeksforgeeks.org/program-to-find-lcm-of-two-numbers/
//Link: https://www.geeksforgeeks.org/program-to-find-lcm-of-2-numbers-without-using-gcd/
//Link: https://www.geeksforgeeks.org/lcm-of-given-array-elements/

#include <bits/stdc++.h>

using namespace std;

int LCMbruteforce(int a, int b)
{
    int larger = max(a, b);
    int smaller = min(a, b);

    for (int i = larger ;; i += larger)
    {
        if (larger % smaller == 0)
            return i;
    }
}

int LCMusingGCD(int a, int b)
{
    return (a * b) / __gcd(a, b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    //cin>>a>>b;
    a = 12; b = 24;
    cout << LCMbruteforce(a, b);
    cout << LCMusingGCD(a, b);

    //LCM of whole Array
    int arr[] = {2, 4, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
        arr[i + 1] = LCMusingGCD(arr[i], arr[i + 1]);

    cout << "LCM of array is: " << arr[n - 1];

    return 0;
}