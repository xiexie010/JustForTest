#include <stdio.h>
#include <time.h>

#define TIME 1000000000
int m,n=TIME;

int main(void)
{
	time_t start , stop;

	register int a,b=TIME;/*�Ĵ�������*/
	int x,y= TIME;/*һ�����*/

	time(&start);
	for(a=0;a<b;a++);
	time(&stop);
	printf("�Ĵ���������ʱ��%ld\n",stop-start);

	time(&start);
	for(x=0;x<y;x++);
	time(&stop);
	printf("�ֲ�������ʱ��%ld\n",stop-start);



	time(&start);
	// printf("value of m is %d,value of n is %d\n",m,n);
	for(m=0;m<n;m++);
	time(&stop);
	printf("ȫ�ֱ�����ʱ��%ld��\n",stop-start);
}