#ifndef __LinkedList_
#define __LinkedList_

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
	Node* head;
	Node* cur;		//참조및삭제
	Node* before;	
	int numOfData;
	int (*comp)(LData d1, LData d2);
}LinkedList;

typedef LinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);
void FInsert(List* plist, LData data);
int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);
LData LRemove(List* plist);
int LCount(List* plist);

void SInsert(List* plist, LData data);

void SetSortRule(List* plist, int(*comp)(LData d1, LData d2));
#endif // !__LinkedList_
