#include <stdio.h>


typedef char SString[100];

int main(void)
{
char *pa;
char a[10];
pa = &a[0];
a[0]='x';
a[1]='x';
a[2]='b';
pa = &a[0];
*(pa+1)='c';
printf("%s\n",a);
printf("%s\n",pa+1);

SString *ss=(SString *)malloc(sizeof(SString));
*ss[0]=a;
printf("%s\n",*ss[0]);


	return 0;
}