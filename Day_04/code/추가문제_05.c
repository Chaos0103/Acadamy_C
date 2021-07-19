#include<stdio.h>

int main()
{
	int num;
	int a[100];
	int i;

	printf("숫자를 입력하세요: ");
	scanf("%d", &num);

	for (i = 0; i < 100; i++)
	{
		a[i] = num % 2;
		num /= 2;
		if (num == 0) break;
	}

	for (int j = i; j >= 0; j--)
		printf("%d", a[j]);
	return 0;
}
