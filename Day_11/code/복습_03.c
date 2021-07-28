#include<stdio.h>

int main()
{
	int score;

	scanf("%d", &score);

	if (score >= 90)
		printf("A학점\n");
	else if (score >= 70)
		printf("B학점\n");
	else if (score >= 60)
		printf("C학점\n");
	else
		printf("D학점\n");

	return 0;
}
