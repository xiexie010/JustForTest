#include <stdio.h>

int main()
{
	int a=4;
	short b;
	double c;
	int* ptr;

	/*sizeof 运算符实例*/
	printf("变量a的大小：%lu\n",sizeof(a));
	printf("变量b的大小：%lu\n",sizeof(b));
	printf("变量c的大小：%lu\n",sizeof(c));

	/*&和*运算符实例*/
	ptr=&a; /*ptr现在包含a的地址*/
	printf("a的值是 %d\n", a);
	printf("ptr是%d\n",*ptr);

	/*三元运算符实例*/
	a=10;
	b=(a==1)?100:-1;
	printf("b的值是%d\n",b);

	b=(a==10)?200:0;
	printf("b的值是%d\n",b );

}