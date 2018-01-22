#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp=fopen("C:\\Users\\Administrator\\Desktop\\study\\c\\file\\b.txt", "r+");
	fprintf(fp,"another test\n");
	fseek(fp,3,SEEK_SET);
	if(fputc('Z',fp)==EOF)
	{
		printf("fputs fail");
	}
	fclose(fp);
	return 0;

}