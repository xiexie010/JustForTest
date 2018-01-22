#include <stdio.h>

//变量声明
extern int a,b;
extern int c;
extern float f;
extern float e=50;

int main(void)
{
	//变量定义
	int a,b;
	int c;
	float f;

	//初始化
	a= 10;
	b= 20;

	
	c=a+b;


	printf("value of c:%d\n",c);

	f=70.0/3.0;
	printf("value of f:%f\n",f);

	printf("value of e:%f\n",e);

	


	return 0;
}