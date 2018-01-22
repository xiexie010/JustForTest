#include <stdio.h>


/*

auto   auto 存储类是所有局部变量默认的存储类。
register	register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量
static
extern
*/

/*函数声明*/
void func1(void);

static int count = 10;   	/*全局变量 - static是默认的*/

int main(void)
{
	while(count--)
	{
		func1();
	}
	return 0;
}

void func1(void)
{
	/*
		thingy 是 func1的局部变量，只初始化一次
		每次调用函数func1的thingy值不会被重置。
	*/

	static int thingy =5;
	thingy++;
	printf("thingy 的值是：%d\n,count的值是%d\n",thingy,count);

}