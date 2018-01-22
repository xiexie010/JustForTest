#include <stdio.h>
#include <stdarg.h>

double average(int num,...)
{
	va_list valist;
	double sum=0;
	int i;

	va_start(valist,num);

	for(i=0;i<num;i++)
	{
		sum+=va_arg(valist,int);
	}

	va_end(valist);

	return sum/num;
}

int main(void)
{
	printf("Average of 2,3,4,5 is %f\n" , average(4,2,3,4,5));
	printf("Average of 10,11,12 is %f\n",average(3,10,11,12));
}