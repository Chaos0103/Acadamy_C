#ifndef __ARRAY_LIST_QUEUE__
#define __ARRAY_LIST_QUEUE__

#define TRUE 1
#define FALSE 0
#define ARRAY_LEN 100

typedef int Data;

typedef struct _arrayQueue
{
	Data arr[ARRAY_LEN];
	int front;
	int rear;
}Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);
void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif // !__ARRAY_LIST_QUEUE__
