#ifndef __CLL_
#define __CLL_

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

typedef struct _linkedList
{
	Node* tail;
	Node* cur;		//참조및삭제
	Node* before;
	int numOfData;
}LinkedList;

typedef LinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);
void LInsertFront(List* plist, LData data);


int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);
LData LRemove(List* plist);
int LCount(List* plist);

#endif // !__CLL_
