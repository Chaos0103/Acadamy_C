#include<stdio.h>

int main()
{
	int cnt = 0;
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j < 7; j++) {
			for (int k = 1; k < 7; k++) {
				if ((i + j + k) % 7 == 0) {
					printf("%d %d %d\n", i, j, k);
					cnt++;
				}
					
			}
		}
	}
	printf("경우의 수: %d\n", cnt);
}
