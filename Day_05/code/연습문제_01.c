#include<stdio.h>

struct employee
{
	char name[20];
	char security_num[20];
	int money;
};
int main()
{
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("종업원 이름[%d]: ", i);
		scanf("%s", &arr[i].name);
		printf("주민등록번호[%d]: ", i);
		scanf("%s", &arr[i].security_num);
		printf("급여정보[%d]: ", i);
		scanf("%d", &arr[i].money);
	}

	for (i = 0; i < 3; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].security_num, arr[i].money);

	return 0;
}
