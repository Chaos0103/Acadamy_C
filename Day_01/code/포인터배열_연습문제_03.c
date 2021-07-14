//연습문제 2번과 연결된 내용
#include<stdio.h>

void Sum(int* arr1, int* arr2, int* sum)
{
	for (int i = 0; i < 5; i++)
	{
		*(sum + i) = *(arr1 + i) + *(arr2 + i);
	}
}
void Total(int *total, int *sum)
{
	for (int i = 0; i < 5; i++)
	{
		*total += *(sum + i);
	}
	
}
int main()
{
	int arr1[5] = { 1000,2000,3000,4000,5000 };
	int arr2[5] = { 100,200,300,400,500 };
	int sum[5] = { 0, };
	int total = 0;

	Sum(arr1, arr2, sum);
	Total(&total, sum);
	
	for (int i = 0; i < 5; i++)
	{
		printf("직원[%d]의 월급 : %d\n", i, sum[i]);
	}
	
	printf("total : %d\n", total);

	return 0;
}
