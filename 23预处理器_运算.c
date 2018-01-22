#include <stdio.h>

#define message_for(a,b) printf(#a " and " #b ",we love you!\n");

#define tokenpaster(n) printf("token" #n "=%d",token##n)

int main(void)
{
	message_for(xie,zhi);

	int token34=34;
	tokenpaster(34);
	return 0;
}