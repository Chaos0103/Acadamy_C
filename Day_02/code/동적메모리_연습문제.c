//사용자에게 정수를 입력받습니다. -1을 입력할때까지 계속 받습니다.
//-> -1입력 시 모두 출력
//메모리 3칸 할당, 자리가 꽉 찰때마다 3칸씩 늘려주세요
#include<stdio.h>

int main()
{
	int cnt = 1;
	int i = 0;
	int* arr = (int*)malloc(sizeof(int) * cnt * 3);
	
	for (i = 0;; i++)
	{
		if (i % 3 == 0)
			arr = (int*)realloc(arr, sizeof(int) * 3 * ++cnt);
		printf("input : ");
		scanf("%d", &arr[i]);
		if (arr[i] == -1)	break;
	}

	printf("[output]\n");
	for (int j = 0; j < i; j++)
		printf("%d ", arr[j]);

	free(arr);
	return 0;
}
