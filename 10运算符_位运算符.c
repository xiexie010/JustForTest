#include <stdio.h>

int main()
{
	int a=60; /* 60 = 0011 1100*/

	int b=13; /* 13 = 0000 1101*/

	int c=0;
	
	c = a & b; /* 00001100 */
	printf("value of c : %d\n",c);

	c = a | b; /* 0011 1101  */
	printf("value of c : %d\n",c);

	c = a ^ b; /*  0011 0001  */
	printf("value of c : %d\n",c);

	c = ~a; /* 1100 0011 */
	printf("value of c : %d\n",c);

 	c = a<<2;
 	printf("value of c : %d\n",c);

 	c = a>>2;
 	printf("value of c : %d\n",c);

}