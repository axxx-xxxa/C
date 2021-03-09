// BiTree.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"malloc.h"

typedef struct BiTNode{
	char data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

//���ʵľ������
void visit(char i, int level) {
	printf("%cλ��%d��",i, level);
}

//����������
void PreOrderTraverse(BiTree T, int level) {
	if (T) {
		visit(T->data, level);
		PreOrderTraverse(T->lchild, level + 1);
		PreOrderTraverse(T->rchild, level + 1);
	}
}


//����һ�Ŷ����� ǰ�����
void CreateBitree(BiTree *T) {
	char c;
	scanf("%c", &c);
	if (' ' == c) {
		*T = NULL;
	}
	else {
		*T = (BiTNode *)malloc(sizeof(BiTNode));
		(*T)->data = c;
		CreateBitree(&(*T)->lchild);
		CreateBitree(&(*T)->rchild);
	}
}

int main() {
	int level = 1;
	BiTree T = NULL;
	CreateBitree(&T);
	printf("2");
	PreOrderTraverse(T, level);
	printf("3");
	return 0;
}