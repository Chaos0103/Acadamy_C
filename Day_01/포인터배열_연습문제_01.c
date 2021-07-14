#include<stdio.h>

void array_copy(int *arr1,int *arr2);

int main()
{
	int a[5] = { 5,19,27,21,34 };
	int b[5];
	int j;

	array_copy(a, b);

	printf("A배열의 값\n");
	for (j = 0; j < 5; j++)
	{
		printf("%3d", a[j]);
	}

	printf("\nB배열의 값\n");
	for (j = 0; j < 5; j++)
	{
		printf("%3d", b[j]);
	}
	return 0;
}

void array_copy(int* arr1, int* arr2)
{
	for (int i = 0; i < 5; i++)
	{
		*(arr2 + i) = *(arr1 + i);
	}
}
