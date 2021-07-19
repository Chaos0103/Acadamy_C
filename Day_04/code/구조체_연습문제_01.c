#include<stdio.h>
struct employee
{
	char name[20];
	char security_num[20];
	int money;
};
int main()
{
	struct employee one;

	printf("종업원 이름 입력: ");		scanf("%s", one.name);
	printf("주민등록번호 입력: ");		scanf("%s", one.security_num);
	printf("급여정보 입력: ");		scanf("%d", &one.money);

	printf("종업원 이름: %s\n", one.name);
	printf("주민등록번호: %s\n", one.security_num);
	printf("급여정보: %d\n", one.money);

	return 0;
}
