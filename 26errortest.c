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
		fprintf(stderr,"�����Ϊ��%d\n",errno);
		perror("ͨ��perror���");
		fprintf(stderr,"���ļ�����%s\n",strerror(errnum));

	}
	else
	{
		fclose(fp);
	}
	return 0;
}