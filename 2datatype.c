#include <stdio.h>
#include <float.h>
int main(void)
{
	printf("int �洢��С �� %d\n", sizeof(int));
	printf("float �洢����ֽ��� �� %lu\n",sizeof(float));
	printf("float��Сֵ�ǣ�%E\n",FLT_MIN);
	printf("float���ֵ�ǣ�%E\n",FLT_MAX);
	printf("float����ֵ�ǣ�%d\n",FLT_DIG);
	return 0;
}