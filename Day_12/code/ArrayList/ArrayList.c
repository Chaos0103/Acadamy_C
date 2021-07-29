#include<stdio.h>
#include"ArrayList.h"

//리스트 초기화
void ListInit(List* plist) 
{
	plist->numOfData = 0;
	plist->curPosition = -1;	
}
//삽입
void LInsert(List* plist, LData data)
{
	if (plist->numOfData > LIST_LEN)
	{
		printf("저장이 불가능 합니다.\n");
		return;
	}	
	plist->arr[plist->numOfData] = data;
	plist->numOfData += 1;
}
//참조
int LFirst(List* plist, LData* pdata)
{
	if (plist->numOfData == 0)
	{
		return FALSE;
	}
	plist->curPosition = 0;		//참조위치 초기화
	*pdata = plist->arr[0];		//pdata가 가리키는 곳에 데이터 저장

	return TRUE;
}
//다음 데이터 참조
int LNext(List* plist, LData* pdata)
{
	//끝 값은 다음 값이 없으므로 =이 들어감
	if (plist->curPosition >= plist->numOfData - 1)
	{
		return FALSE;
	}
	plist->curPosition++;
	*pdata = plist->arr[plist->curPosition];

	return TRUE;
}
//데이터 삭제
LData LRemove(List* plist)
{
	int rpos = plist->curPosition;		//삭제할 데이터의 인텍스 값 참조
	int num = plist->numOfData;
	int rdata = plist->arr[rpos];

	//뒤에 값을 저장하기 때문에 num-1
	for (int i = rpos; i < num - 1; i++)
	{
		plist->arr[i] = plist->arr[i + 1];
	}

	plist->numOfData--;
	plist->curPosition--;

	return rdata;
}
//데이터 카운트
int LCount(List* plist)
{
	return plist->numOfData;
}
