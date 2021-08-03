#include<stdio.h>
#include<malloc.h>
#include"LinkedListQueue.h"

void QueueInit(Queue* pq)
{
	pq->front = NULL;
	pq->rear = NULL;
}
int QIsEmpty(Queue* pq)
{
	if (pq->front == NULL)
		return TRUE;
	else
		return FALSE;
}
void Enqueue(Queue* pq, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = data;
	if (QIsEmpty(pq))
		pq->front = newNode;
	else
		pq->rear->next = newNode;
	pq->rear = newNode;
}
Data Dequeue(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Empty Data!\n");
		return FALSE;
	}
	Node *rNode;
	rNode = pq->front;
	Data rdata = rNode->data;

	pq->front = rNode->next;

	free(rNode);
	return rdata;
}
Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Empty Data!\n");
		return FALSE;
	}
	Data rdata = pq->front->data;

	return rdata;
}
