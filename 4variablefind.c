#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	printf("a的地址是%p,b的地址是%p\n",&a,&b);

	printf("a的数值是%d\n",a);
	printf("b的数值是%d\n",b);
	printf("c的数值是%d\n",c);
	printf("d的数值是%d\n",d);
	return 0;
}