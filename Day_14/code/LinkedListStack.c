#include<stdio.h>
#include<malloc.h>
#include"LinkedListStack.h"

void StackInit(Stack* pstack)
{
	pstack->head = NULL;
}

int SIsEmpty(Stack* pstack)
{
	if (pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = pstack->head;
	pstack->head = newNode;
}

Data SPop(Stack* pstack)
{
	if (SIsEmpty(pstack))
	{
		printf("데이터가 없습니다.\n");
		return FALSE;
	}
	Node* rNode = pstack->head;
	Data rdata = rNode->data;

	pstack->head = rNode->next;
	
	free(rNode);
	return rdata;
}

Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
	{
		printf("데이터가 없습니다.\n");
		return FALSE;
	}
	Data rdata = pstack->head->data;

	return rdata;
}
