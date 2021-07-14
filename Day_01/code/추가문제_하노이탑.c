#include<stdio.h>

void hanoi(int num,int *cnt)
{
	++(*cnt);
	if (num == 1)
	{
		return ;
	}
	else
	{
		hanoi(num - 1, cnt);
		hanoi(num - 1, cnt);
	}
}
int main() 
{
	int num = 0;
	int cnt = 0;

	printf("원판의 갯수를 입력하세요 : ");
	scanf("%d", &num);

	hanoi(num, &cnt);

	printf("원판 이동 횟수 : %d\n", cnt);

	return 0;
}
