#include <stdio.h>

int main()
{
	int a=5;
	int b=10;
	int c=0;

	if(a&&b)
	{
		printf("a和b条件都为真\n");
	}
	if(a&&c)
	{
		printf("a和c条件都为真\n");
	}
	else
	{
		printf("a和c条件不都为真\n");
	}

	if(!(a&&c))
	{
		printf("a和c条件都为真\n");
	}
	else
	{
		printf("a和c条件不都为真\n");
	}

	if(a||c)
	{
		printf("a和c 条件其中一个为真\n");
	}


}