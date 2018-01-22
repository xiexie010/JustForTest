#include <stdio.h>

typedef struct 
{
	int a;
}SqList;

void InitList(SqList &L)
{
	L.a=10;
}

int main(void)
{
	SqList sq;
	InitList(sq);
	return 0;
}