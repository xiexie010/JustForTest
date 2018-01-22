#include <stdio.h>
int main()
{
	int a=8;
	int b=9;
	int c;
	int d;
	c=(c=a&(a-1))==0?1:0;

	printf("c 的值 是 %d\n",c);
	c=b&(b-1);
	printf("c 的值 是 %d\n",c);



}