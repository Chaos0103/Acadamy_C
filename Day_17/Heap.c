#include<stdio.h>
#include"heap.h"

void HeapInit(Heap* ph)
{
	ph->numOfData = 0;
}
int HIsEmpty(Heap* ph)
{
	if (ph->numOfData == 0)
		return TRUE;
	else
		return FALSE;
}

//인덱스 불러오기
int GetParentIDX(int idx)
{
	return idx / 2;
}
int GetLChildIDX(int idx)
{
	return idx * 2;
}
int GetRChildIDX(int idx)
{
	return  GetLChildIDX(idx) + 1;
}

//우선 순위가 높은 자식의 인덱스 값 반환
int GetHiPriChildIDX(Heap* ph, int idx)
{
	//자식 노드가 없을 때 0 반환
	if (GetLChildIDX(idx) > ph->numOfData)
		return FALSE;
	//자식 노드가 왼쪽 자식 노드 하나만 존재할 때
	else if (GetLChildIDX(idx) == ph->numOfData)
		return GetLChildIDX(idx);
	//자식 노드가 둘 다 존재할 때
	else
	{
		if ((ph->heapArr[GetLChildIDX(idx)].pr) > (ph->heapArr[GetRChildIDX(idx)].pr))
			return GetRChildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
	

}

void HInsert(Heap* ph, HData data, Priority pr)
{
	int idx = ph->numOfData + 1; 
	
	HeapElem nelem = { pr,data };

	while (idx != 1)
	{
		//새 노드와 부모 노드의 우선순위 비교
		if (pr < ph->heapArr[GetParentIDX(idx)].pr)
		{
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else
			break;
	}
	ph->heapArr[idx] = nelem;
	ph->numOfData++;
}
HData HDelete(Heap* ph)
{
	HData retData = ph->heapArr[1].data;
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if (lastElem.pr <= ph->heapArr[childIdx].pr)
		{
			break;
		}
		else
		{
			ph->heapArr[parentIdx] = ph->heapArr[childIdx];
			parentIdx = childIdx;
		}
	}
	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData--;
	return retData;
}
