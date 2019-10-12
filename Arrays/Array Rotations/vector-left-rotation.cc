// Time Complexity - O(k)
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	int k = 2;

	for (int i = 0; i < k; ++i)
	{
		v.push_back(v[0]);
		v.erase(v.begin());
	}


	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << " ";
	}
}