#include<stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num < 5)
		printf("%d는 5보다 작습니다.\n", num);
	else if (num < 10)
		printf("%d는 10보다 작습니다.\n", num);
	else if (num < 15)
		printf("%d는 15보다 작습니다.\n", num);
	else
		printf("%d는 보다 작습니다.\n", num);

}
