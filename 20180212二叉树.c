#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;
typedef struct BiTNode
{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

char test[]="ABDG##H###CE#I##F##";
int iii=0;
BiTree* CreateBiTree()
{
	
	ElemType in;
	in=test[iii++];
	// in=getchar();
	// setbuf(stdin, NULL); /*清空缓冲区*/ 
	// scanf("%c",&in);
	if(in=='#')
	{
		
		return NULL;
	}	
	else
	{
		
		BiTree *b=(BiTree *)malloc(sizeof(BiTree));
		b->data=in;
		b->lchild=CreateBiTree();
		b->rchild=CreateBiTree();
		return b;
	}
}
//前序遍历
void PreOrderTraverse(BiTree *b)
{
	BiTree *bi=b;
	printf("%c ",bi->data);
	if(b->lchild!=NULL)PreOrderTraverse(b->lchild);
	if(b->rchild!=NULL)PreOrderTraverse(b->rchild);
}
//中序遍历
void InOrderTraverse(BiTree *b)
{
	BiTree *bi = b;
	if(b->lchild!=NULL)InOrderTraverse(b->lchild);
	printf("%c ",bi->data);
	if(b->rchild!=NULL)InOrderTraverse(b->rchild);

}
//后序遍历
void PostOrderTraverse(BiTree *b)
{
	BiTree *bi=b;
	if(b->lchild!=NULL)PostOrderTraverse(b->lchild);
	if(b->rchild!=NULL)PostOrderTraverse(b->rchild);
	printf("%c ",bi->data);
}

int main(void)
{
	BiTree *b=CreateBiTree();
	printf("\n--------\n");
	PreOrderTraverse(b);
	printf("\n--------\n");
	InOrderTraverse(b);
	printf("\n--------\n");
	PostOrderTraverse(b);
	printf("\n--------\n");
	return 0;
}