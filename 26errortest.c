#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(void)
{
	FILE *fp;
	int errnum;
	fp=fopen("unexistFile","rb");
	if(fp==NULL)
	{
		errnum=errno;
		fprintf(stderr,"错误号为：%d\n",errno);
		perror("通过perror输出");
		fprintf(stderr,"打开文件错误：%s\n",strerror(errnum));

	}
	else
	{
		fclose(fp);
	}
	return 0;
}