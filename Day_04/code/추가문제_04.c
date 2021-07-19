#include<stdio.h>

int main()
{
	int num[10];
	int even[10], odd[10];
	int even_index = 0, odd_index = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] % 2 == 0)
			even[even_index++] = num[i];
		else
			odd[odd_index++] = num[i];
	}
	printf("홀수 출력: ");
	for (int i = 0; i < odd_index; i++)
		printf("%d ", odd[i]);
	printf("\n짝수 출력: ");
	for (int i = 0; i < even_index; i++)
		printf("%d ", even[i]);
	return 0;	
}
