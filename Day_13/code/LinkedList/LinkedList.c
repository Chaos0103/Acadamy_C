#include<stdio.h>
#include"Link.h"

void ListInit(List* plist)
{
	plist->head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}
void LInsert(List* plist, LData data)
{
	if (plist->comp == NULL)
	{
		FInsert(plist, data);
	}
	else
	{
		SInsert(plist, data);
	}
}
void FInsert(List* plist, LData data) {
	Node* newNode = (Node*)malloc(sizeof(Node));	//새로 선언 후 동적할당
	newNode->data = data;							//데이터 입력

	newNode->next = plist->head->next;				//tail 기리킴
	plist->head->next = newNode;					//head가 입력된 노드 가르킴

	plist->numOfData++;								//data 갯수 증가
}
int LFirst(List* plist, LData* pdata)
{
	if (plist->head->next == NULL)
	{
		return FALSE;
	}
	//헤드 -> 더미 -> 데이터1 -> 데이터2 ...
	plist->before = plist->head;					//해드가 가리키고있는 더미 지목
	plist->cur = plist->head->next;					//해드가 가리키고있는 더미의 다음 주소(데이터1) 지목

	*pdata = plist->cur->data;						//데이터 1의 값을 저장
	return TRUE;
}
int LNext(List* plist, LData* pdata)
{
	if (plist->cur->next == NULL)
	{
		return FALSE;
	}
	//헤드 -> 더미 -> 데이터1 -> 데이터2 ...
	plist->before = plist->cur;						//before을 cur위치로 이동
	plist->cur = plist->cur->next;					//현재위치 다음 데이터를 지목

	*pdata = plist->cur->data;
	return TRUE;
}
LData LRemove(List* plist)
{
	Node* rpos = plist->cur;						//현재위치
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	plist->numOfData--;
	return rdata;
}
int LCount(List* plist)
{
	return plist->numOfData;
}
void SInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* pred = plist->head;
	newNode->data = data;

	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;
	}
	newNode->next = pred->next;
	pred->next = newNode;

	plist->numOfData++;
}
//
void SetSortRule(List* plist, int(*comp)(LData d1, LData d2))
{
	plist->cur = comp;
}
