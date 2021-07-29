#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define	FALSE 0


//ArrayList 선언
#define LIST_LEN 100
typedef int LData;

//ArrayList 구조체 선언
typedef struct _ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;		//데이터 갯수
	int	curPosition;	//현재 참조 위치
} ArrayList;



typedef ArrayList List;

//ADT 선언
void ListInit(List* plist);
void LInsert(List* plist, LData data);
int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);
LData LRemove(List* plist);
int LCount(List* plist);

#endif // !__ARRAY_LIST_H__
