#include <stdio.h>
#include <stdlib.h>

#define MaxBookNum 1000
#define MaxKeyNum 2500
#define MaxLineLen 500
#define MaxWordNum 100

typedef struct{
	char *item[];
	int last;
}WordListType;//�ʱ�����

typedef int ElemType;//��������Ԫ������Ϊ����(�������)
typedef struct{
	HString key;
	LinkList bnolist;
}IdxTermType;//����������
typedef struct{
	IdxTermType item[MaxKeyNum +1 ] ;
	int last;
}IdxListType;//����������


