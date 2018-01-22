#include <stdio.h>
#include <time.h>

#define TIME 1000000000
int m,n=TIME;

int main(void)
{
	time_t start , stop;

	register int a,b=TIME;/*寄存器变量*/
	int x,y= TIME;/*一般变量*/

	time(&start);
	for(a=0;a<b;a++);
	time(&stop);
	printf("寄存器变量用时：%ld\n",stop-start);

	time(&start);
	for(x=0;x<y;x++);
	time(&stop);
	printf("局部变量用时：%ld\n",stop-start);



	time(&start);
	// printf("value of m is %d,value of n is %d\n",m,n);
	for(m=0;m<n;m++);
	time(&stop);
	printf("全局变量用时：%ld秒\n",stop-start);
}