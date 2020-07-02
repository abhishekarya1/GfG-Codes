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