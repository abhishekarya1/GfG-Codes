//Finding mod when one of the numbers is very large

//Link : https://www.geeksforgeeks.org/gcd-of-two-numbers-when-one-of-them-can-be-very-large-2/

#include <bits/stdc++.h>
using namespace std;

long reduce(string n, long small)
{
    long mod = 0;
    for (int i = 0; i < n.length(); ++i)
    {
        mod = (mod * 10 + (n[i] - '0')) % small;
    }

    return mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long a;
    //cin >> a;
    a = 1221;

    string b;
    //cin >> b;
    b = "1234567891011121314151617181920212223242526272829";
    long reducedNum = reduce(b, a);

    cout << __gcd(reducedNum, a);

    return 0;
}