#include <stdio.h>

int main(void)
{
	FILE *fp =NULL;
	//C:\Users\Administrator\Desktop\study\c\file
	fp = fopen("C:\\Users\\Administrator\\Desktop\\study\\c\\file\\b.txt","w+");
	int a=fprintf(fp,"fprintf test\n");
	int b=fputs("fputs test\n",fp);
	printf("%d\n",a);
	printf("%d\n",b);
}