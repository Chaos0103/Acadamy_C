#ifndef __LINKED_LIST_QUEUE__
#define __LINKED_LIST_QUEUE__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
	int data;
	struct _node* next;
}Node;

typedef struct _LinkedQueue
{
	Node* front;
	Node* rear;
}Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);
void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif // !__LINKED_LIST_QUEUE__
