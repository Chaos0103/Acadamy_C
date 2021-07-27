#include<stdio.h>
#include<string.h>

int main()
{
	//선언부
	char arr[200];
	int arr_bi[200] = { 0, };
	
	int cnt1 = 0, cnt2 = 1;

	//수식입력
	scanf("%s", arr);
	
	//괄호 카운트
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == '(')
			cnt1++;
	}

	//경우의 수
	for (int i = 0; i < cnt1; i++)
		cnt2 *= 2;
	cnt2--;

	//출력
	//printf("출력\n");
	for (int i = 1; i <= cnt2; i++)
	{
		// i -> 이진수
		int t[10] = { 0, };
		int num = i;
		int bi_index = 0;
		while (num!=0)
		{
			t[bi_index++] = num % 2;
			num /= 2;
		}

		//이진입력
		int index = 0;
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == '(')
			{
				arr_bi[j] = t[index++];
			}
			if (arr[j] == ')')
			{
				arr_bi[j] = t[--index];
			}
		}

		//출력
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr_bi[j] == 0)
				printf("%c", arr[j]);
		}
		printf("\n");
	}
	
	return 0;
}

