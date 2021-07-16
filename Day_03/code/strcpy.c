#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
	char str1[30] = "Simple String";
	char str2[30];
	strcpy(str2, str1);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	return 0;
}
