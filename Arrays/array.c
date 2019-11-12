#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void init(struct array* arr, int n)
{
	arr->A = (int*)malloc(n * sizeof(int));
	arr->size = n;
	arr->length = 0;
}

void display(const struct array arr)
{
	int i;
	for (i = 0; i < arr.length; ++i)
	{
		printf("%d ", arr.A[i]);
	}
}

void append(struct array* arr, int x)
{
	arr->A[arr->length] = x;
	arr->length++;
}

void insert(struct array* arr, int pos, int x)
{
	if (pos < 0 || pos > arr->length) return;

	int i;
	for (i = arr->length; i > pos; i--)
	{
		arr->A[i] = arr->A[i - 1];
	}
	arr->A[pos] = x;
	arr->length++;
}

int main(void)
{
	struct array arr;
	int n = 10;
	init(&arr, n);

	append(&arr, 1);
	display(arr);

}