
#include <stdio.h>

int main(void)
{
	int sum=0,sum2=0,num=1,num2=2;

	while(num<100)
	{
		sum+=num;
		num+=2;
	}
	printf("����֮��Ϊ%d\n",sum);

	while(num2<100)
	{
		sum2+=num2;
		num2+=2;

	}
	printf("ż��֮��Ϊ%d\n",sum2);
}