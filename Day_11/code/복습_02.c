#include<stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	
	if (num % 2 == 0)
		printf("%d는 짝수입니다.\n", num);
	else if(num % 2 == 1)
		printf("%d는 홀수입니다.\n", num);

	return 0;
}
