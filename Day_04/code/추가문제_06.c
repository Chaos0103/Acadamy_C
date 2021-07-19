#include<stdio.h>

int main()
{
	int num[10];
	int result[10];
	int index = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] % 2 == 1)
			result[index++] = num[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0)
			result[index++] = num[i];
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", result[i]);
	return 0;
}
