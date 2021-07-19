#include<stdio.h>
int main()
{
	int cnt = 0;
	for (int i = 2;; i++)
	{
		int sw = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) 
			{
				sw = 1;
			}
		}
		if (sw == 0)
		{
			cnt++;
			printf("%d ", i);
		}
		if (cnt == 10) break;
	}
	return 0;
}
