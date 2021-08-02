#ifndef __LINKED_LIST_STACK_
#define __LINKED_LIST_STACK_

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

typedef struct _LinkedStack
{
	Node* head;
}Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);
void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);

#endif // !__LINKED_LIST_STACK_
