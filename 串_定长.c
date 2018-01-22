#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTRLEN 255
#define Ok 1
#define Errow -1
typedef int Status;
typedef unsigned char SString [MAXSTRLEN+1];

void  StrAssign(SString r,char *str)
{
	int i;
	int j=0;
	for(i=0;i<strlen(str);i++)
	{
		if(i>=MAXSTRLEN)continue;
		r[i+1]=*(str+i);		
		j++;
	}
	r[0]=j;
}

void StrPrintf(SString s)
{
	printf("%s\n",s+1);	
}


int main(void)
{
	SString a;
	StrAssign(a,"xiexie");
	StrPrintf(a);
	


	return 0;
}