#include<iostream>

#define INT_BITS 32

using namespace std;

int left_rotate_bits(int n, unsigned int k)
{
	return n << k | (n >> (INT_BITS - k));		// rotate by complement (out of 32) in opposite direction and OR them
}

int right_rotate_bits(int n, int k)				
{
	return n >> k | (n << (INT_BITS - k));		// rotate by complement (out of 32) in opposite direction and OR them
}

int main()
{
	int n = 229;
	unsigned int k = 3;		

	cout << left_rotate_bits(n, k);   // result must be 1832

	//cout << right_rotate_bits(n, k);

}