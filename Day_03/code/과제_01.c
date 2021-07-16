#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
	char str[30];
	int len = 0;
	int sum = 0;
	scanf("%s", str);

	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			sum += (str[i] - '0');
		}
	}
	printf("%d\n", sum);
	return 0;
}
