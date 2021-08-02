#ifndef __ARRAY_LIST_STACK_
#define __ARRAY_LIST_STACK_

#define STACK_LEN 100
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct arrayStack
{
	Data stackArr[STACK_LEN];
	int topIndex;
}Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);
void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);

#endif // !__ARRAY_LIST_STACK_
