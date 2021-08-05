#ifndef __Tree__
#define __Tree__

//데이터형 선언
typedef int BTData;

//node 구조체 선언
typedef struct _node
{
	BTData data;
	struct _node* Right;
	struct _node* Left;
}BTreeNode;

//ADT 선언
BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);
BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);
void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);

#endif // !__Tree__
