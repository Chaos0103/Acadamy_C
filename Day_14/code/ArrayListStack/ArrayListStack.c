#include<stdio.h>
#include"ArrayListStack.h"

void StackInit(Stack* pstack)
{
	pstack->topIndex = -1;
}

int SIsEmpty(Stack* pstack)
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data)
{
	pstack->topIndex++;
	if (pstack->topIndex == STACK_LEN)
	{
		printf("Index 초과\n");
		return;
	}
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack)
{
	if (SIsEmpty(pstack))
	{
		printf("데이터가 없습니다\n");
		return FALSE;
	}

	Data rdata = pstack->stackArr[pstack->topIndex];

	pstack->topIndex--;

	return rdata;
}

Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
	{
		printf("데이터가 없습니다\n"); 
		return FALSE;
	}

	Data rdata = pstack->stackArr[pstack->topIndex];

	return rdata;
}
