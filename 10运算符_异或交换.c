#include <stdio.h>

int main(void)
{
	unsigned int a=60;
	unsigned int b=10;

	printf("a��ֵ��%d,b��ֵ��%d\n",a,b);
	
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a��ֵ��%d,b��ֵ��%d\n",a,b);

	return 0;
	
	

}