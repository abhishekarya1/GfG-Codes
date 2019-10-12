#include<iostream>

using namespace std;

class Array
{

private:
	int size;
	int length;
	int* arr;

public:
	Array(int size)
	{
		this->size = size;
		length = 0;
		arr = new int[size];
	}

	~Array()
	{
		delete[] arr;
	}

	void insert(int, int);
	void deletei(int);
	void display();
};

void Array::insert(int ele, int idx)
{
	if (length >= size || idx < 0 || idx > length) return;

	int i;
	for (i = length; i > idx; i--)
		arr[i] = arr[i - 1];

	arr[i] = ele;
	length++;
}

void Array::deletei(int idx)
{
	if (length <= 0 || idx < 0 || idx >= length) return;

	int i;
	for (i = idx; i < length - 1; ++i)
	{
		arr[i + 1] = arr[i];
	}

	length--;
}

void Array::display()
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	Array a(5);
	a.insert(1, 0);
	a.insert(2, 1);
	a.insert(3, 2);
	a.insert(4, 3);

	a.deletei(3);

	a.display();
}