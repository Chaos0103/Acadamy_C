#include<stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	
	for (int i = num1; i > 0; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("%d와 %d의 최대공약수: %d\n", num1, num2, i);
			return 0;
		}
	}
}
