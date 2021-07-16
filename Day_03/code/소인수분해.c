#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	printf("소인수분해 결과 : ");
	for (int i = 2;; i++)
	{
		if (num % i == 0)
		{
			while (1)
			{
				if (num % i != 0)
					break;
				printf("%d ", i);
				num /= i;
			}
		}
		if (num == 1) break;
	}
	return 0;
}
