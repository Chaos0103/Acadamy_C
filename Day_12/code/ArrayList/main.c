#include<stdio.h>
#include"ArrayList.h"

int main()
{
	List list;

	//초기화
	ListInit(&list);
	int data;

	//11, 22, 33삽입
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 33);
	//참조
	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}
	printf("\n");
	//제거
	if (LFirst(&list, &data))
	{
		if (data == 22)
		{
			LRemove(&list);
		}
		while (LNext(&list, &data))
		{
			if (data == 22)
			{
				LRemove(&list);
			}
		}
	}
	//출력
	printf("현재 데이터의 수: %d\n", LCount(&list));
	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}

	return 0;
}
