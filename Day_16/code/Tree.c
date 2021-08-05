#include<stdio.h>
#include<malloc.h>
#include"Tree.h"

//노드의 생성
BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
	newNode->Left = NULL;
	newNode->Right = NULL;
	return newNode;
}
//노드에 저장된 데이터를 반환
BTData GetData(BTreeNode* bt)
{
	return bt->data;
}
//노드에 데이터를 저장
void SetData(BTreeNode* bt, BTData data)
{
	bt->data = data;
}
//왼쪽 서브 트리의 주소 값 반환
BTreeNode* GetLeftSubTree(BTreeNode* bt)
{
	return bt->Left;
}
//오른쪽 서브 트리의 주소 값 반환
BTreeNode* GetRightSubTree(BTreeNode* bt)
{
	return bt->Right;
}
//main의 서브 왼쪽 서브트리로 sub를 연결
void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->Left != NULL)
	{
		free(main->Left);
	}
	main->Left = sub;
}
//main의 서브 오른쪽 서브트리로 sub를 연결
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->Right != NULL)
	{
		free(main->Right);
	}
	main->Right = sub;
}
