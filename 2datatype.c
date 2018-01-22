#include <stdio.h>
#include <float.h>
int main(void)
{
	printf("int 存储大小 ： %d\n", sizeof(int));
	printf("float 存储最大字节数 ： %lu\n",sizeof(float));
	printf("float最小值是：%E\n",FLT_MIN);
	printf("float最大值是：%E\n",FLT_MAX);
	printf("float精度值是：%d\n",FLT_DIG);
	return 0;
}