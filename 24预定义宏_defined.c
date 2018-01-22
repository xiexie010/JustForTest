#include <stdio.h>

#if !defined(MESSAGE)
	#define MESSAGE "you wish!"
#endif

#define MAX(x,y)((x)>(y)?(x):(y))
#define SWAP(x,y){x=x+y;y=x-y;x=x-y;}
#define SWAP2(x,y){x=x^y;y=x^y;x=x^y;}

#define SWAP3(x,y) {x=x^y;y=x^y;x=x^y;}
int main(void)
{
	printf("messsage 的值是 %s\n",MESSAGE);

	printf("1和12大数是%d\n",MAX(1,12));

	int a=10;
	int b=23;

	SWAP(a,b);
	printf("value of a is %d\n",a);
	printf("value of b is %d\n",b);

	int c=33;
	int d=45;
	SWAP2(c,d);
	printf("value of c is %d\n",c);
	printf("value of d is %d\n",d);


	return 0;
}