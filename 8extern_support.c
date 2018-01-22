#include <stdio.h>

extern int count;
void write_extern(void)
{
	printf("countµÄÖµÊÇ%d\n",count);
}