#include <stdio.h>


/*

auto   auto �洢�������оֲ�����Ĭ�ϵĴ洢�ࡣ
register	register �洢�����ڶ���洢�ڼĴ����ж����� RAM �еľֲ�����
static
extern
*/

/*��������*/
void func1(void);

static int count = 10;   	/*ȫ�ֱ��� - static��Ĭ�ϵ�*/

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
		thingy �� func1�ľֲ�������ֻ��ʼ��һ��
		ÿ�ε��ú���func1��thingyֵ���ᱻ���á�
	*/

	static int thingy =5;
	thingy++;
	printf("thingy ��ֵ�ǣ�%d\n,count��ֵ��%d\n",thingy,count);

}