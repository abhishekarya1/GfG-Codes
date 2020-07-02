// Link : https://www.geeksforgeeks.org/rearrange-binary-string-alternate-x-y-occurrences/

// Given a binary string s and two integers x and y are given. \
Task is to arrange the given string in such a way so that ‘0’ comes X-time then ‘1’ comes Y-time and so on until one of the ‘0’ or ‘1’ is finished.\
Then concatenate rest of the string and print the final string.

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


void func(string str, int n)
{
	int countZero = 0;

	for (int i = 0; i < n; ++i)
	{
		if (str[i] == '0')
			countZero++;
	}

	int countOne = n - countZero;

	int x, y;
	cin >> x >> y;

	while(countZero || countOne)
	{
		for (int i = 0; i < x && countZero > 0; ++i)
		{
			cout << '0';
			countZero--;
		}

		for (int i = 0; i < y && countOne > 0; ++i)
		{
			cout << '1';
			countOne--;
		}
	}

}

int main()
{
	string str = "1011011";

	int n = str.length();

	func(str, n);
}