#include<iostream>

using namespace std;

class Array
{
private:
	int size;
	int length;
	int *A;
public:
	Array()
	{
		size = 0;
		length = 0;
		A = new int[size];
	}
	Array(int sz)
	{
		size = sz;
		length = 0;
		A = new int[size];
	}

	~Array()
	{
		delete []A;
	}

	void insert(int pos, int x);
	void delete_ele(int pos);
	void append(int x);
	void display();

	int get(int idx)
	{
		return A[idx];
	}

	void set(int idx, int x)
	{
		A[idx] = x;
	}


};

void Array::insert(int pos, int x)
{
	if (pos > length || pos < 0) return;

	for (int i = length; i > pos; i--)
	{
		A[i] = A[i - 1];
	}

	A[pos] = x;
	length++;
}

void Array::display()
{
	for (int i = 0; i < length; ++i)
	{
		cout << A[i] << " ";
	}
}

void Array::delete_ele(int pos)
{
	if (pos < 0 || pos >= length) return;		// can't delete , no element on arr[length]

	for (int i = pos; i < length - 1; ++i)		//length - 1 to prevent segmentation fault on accessing A[length]
	{
		A[i] = A[i + 1];
	}

	length--;
}

void Array::append(int x)
{
	A[length] = x;
	length++;
}

int main()
{
	Array arr(10);

	arr.insert(0, 1);
	arr.insert(1, 2);
	arr.insert(2, 3);
	arr.insert(3, 4);
	arr.insert(4, 5);
	//arr.insert(0, 9);

	//arr.display();

	arr.delete_ele(0);
	//arr.delete_ele(1);

	arr.display();

}