#include<stdio.h>
#include"ArrayListQueue.h"

int NextPosIdx(int pos)
{
	if (pos == ARRAY_LEN - 1)
		return 0;
	else
		return pos + 1;
}
void QueueInit(Queue* pq)
{
	pq->front = 0;
	pq->rear = 0;
}
int QIsEmpty(Queue* pq)
{
	if (pq->front == pq->rear)
		return TRUE;
	else
		return FALSE;
}
void Enqueue(Queue* pq, Data data)
{
	if (NextPosIdx(pq->rear) == pq->front)
	{
		printf("Full Data!\n");
		return;
	}
	pq->rear = NextPosIdx(pq->rear);
	pq->arr[pq->rear] = data;
}
Data Dequeue(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Empty Data!\n");
		return FALSE;
	}
	pq->front = NextPosIdx(pq->front);
	Data rdata = pq->arr[pq->front];

	return rdata;
}
Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Empty Data!\n");
		return FALSE;
	}
	int rindex = NextPosIdx(pq->front);
	Data rdata = pq->arr[rindex];

	return rdata;
}
