//Ordered Prime Signature

//Link : https://www.geeksforgeeks.org/ordered-prime-signature/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> sign;

void findSignature(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        int k = 0;
        while (n % i == 0)
        {
            k++;
            n /= i;
        }

        if (k > 0)
            sign.push_back(k);
    }

    if (n > 1) sign.push_back(1);
}

int main()
{
    int n;
    cin >> n;

    findSignature(n);

    sort(sign.begin(), sign.end());

    for (int i = 0; i < sign.size(); ++i)
    {
        cout << sign[i] << " ";
    }

    return 0;
}