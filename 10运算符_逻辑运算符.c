#include <stdio.h>

int main()
{
	int a=5;
	int b=10;
	int c=0;

	if(a&&b)
	{
		printf("a��b������Ϊ��\n");
	}
	if(a&&c)
	{
		printf("a��c������Ϊ��\n");
	}
	else
	{
		printf("a��c��������Ϊ��\n");
	}

	if(!(a&&c))
	{
		printf("a��c������Ϊ��\n");
	}
	else
	{
		printf("a��c��������Ϊ��\n");
	}

	if(a||c)
	{
		printf("a��c ��������һ��Ϊ��\n");
	}


}