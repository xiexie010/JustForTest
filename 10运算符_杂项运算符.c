#include <stdio.h>

int main()
{
	int a=4;
	short b;
	double c;
	int* ptr;

	/*sizeof �����ʵ��*/
	printf("����a�Ĵ�С��%lu\n",sizeof(a));
	printf("����b�Ĵ�С��%lu\n",sizeof(b));
	printf("����c�Ĵ�С��%lu\n",sizeof(c));

	/*&��*�����ʵ��*/
	ptr=&a; /*ptr���ڰ���a�ĵ�ַ*/
	printf("a��ֵ�� %d\n", a);
	printf("ptr��%d\n",*ptr);

	/*��Ԫ�����ʵ��*/
	a=10;
	b=(a==1)?100:-1;
	printf("b��ֵ��%d\n",b);

	b=(a==10)?200:0;
	printf("b��ֵ��%d\n",b );

}