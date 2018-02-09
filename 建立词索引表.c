#include <stdio.h>
#include <stdlib.h>

#define MaxBookNum 1000
#define MaxKeyNum 2500
#define MaxLineLen 500
#define MaxWordNum 100

typedef struct{
	char *item[];
	int last;
}WordListType;//词表类型

typedef int ElemType;//定义数据元素类型为整型(书号类型)
typedef struct{
	HString key;
	LinkList bnolist;
}IdxTermType;//索引项类型
typedef struct{
	IdxTermType item[MaxKeyNum +1 ] ;
	int last;
}IdxListType;//索引项类型


