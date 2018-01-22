#include <stdio.h>

int fibonaqi(unsigned int i)
{
	if(i==0)
	{
		return 0;
	}
	if(i==1)
	{
		return 1;
	}

	return fibonaqi(i-1)+fibonaqi(i-2);
}

int main(void)
{
	// int i=10£»
	for(int i=0;i<10;i++)
	{
		printf("%d\n",fibonaqi(i));
	}
}