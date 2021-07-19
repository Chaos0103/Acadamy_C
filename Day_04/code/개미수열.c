#include<stdio.h>

int main()
{
	int result[100] = { 1,};
	int save[100] = { 0, };
	int printnum[100] = { 0, };
	int index = 6;
	int num;

	scanf("%d", &num);

	printf("1\n");
	for (int i = 0; i < num-1; i++)
	{
		int size = 0;
		int n = 1;

		//배열길이
		for (int j = 0;; j++)
		{
			if (result[j] == 0)
			{
				size = j;
				break;
			}
		}
		save[0] = result[0];
		
		//중복제거
		for (int j = 0; j < size; j++)
		{
			if (result[j] != save[n - 1])
				save[n++] = result[j];
		}

		//중복카운트
		int pos = 0;
		for (int j = 0; j < n; j++)
		{
			int cnt = 0;
			for (int k = pos; k < size; k++)
			{
				if (save[j] != result[k])
				{
					pos = k;
					break;
				}
				else
					cnt++;
			}
			printnum[j * 2] = save[j];
			printnum[j * 2 + 1] = cnt;
		}
		//출력
		for (int j = 0;; j++)
		{
			if (printnum[j] == 0)
				break;
			printf("%d", printnum[j]);
		}
		//초기화
		for (int j = 0;; j++)
		{
			if (result[j] == 0) break;
			result[j] = 0;
		}
		for (int j = 0;; j++)
		{
			if (printnum[j] == 0)
				break;
			result[j] = printnum[j];
		}
		printf("\n");
	}
}
