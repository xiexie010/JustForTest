#include <stdio.h>

void debug_arg(unsigned int num, ...) 
{
    unsigned int i = 0;
    unsigned int *addr = #
    for (i = 0; i <= num; i++) 
    {
        /* *(addr + i) ������������ȡ�����ݽ����Ĳ���,�����ڳ�ջ���� */
        printf("i=%d,value=%d\r\n", i, *(addr + i));
    }
}
int main(void)
{
    debug_arg(3, 66, 88, 666);
    return 0;
}