#include<stdio.h>

void get_sum_diff(int* a, int* b);
int main()
{
	int a, b;
	printf("a, b를 입력하시오");
	scanf("%d%d", &a, &b);

	get_sum_diff(&a, &b);

	printf("두 정수의 합 : %d\n", a);
	printf("두 정수의 차 : %d\n", b);
	
	return 0;
}

void get_sum_diff(int* a, int* b)
{
	int aa = *a;
	int bb= *b;

	*a = aa + bb;
	*b = aa - bb;
}
