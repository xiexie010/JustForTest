#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXSTRLEN 100
#define Ok 1
#define Errow -1
typedef int Status;
typedef unsigned char SString [MAXSTRLEN+1];

void get_next(SString t,int next[])
{
	int i=1;
	next[1]=0;
	int j=0;
	while(i<t[0])
	{
		if(j==0||t[i]==t[j])
		{
			++i;
			++j;
			next[i]=j;
			
		}
		else
		{
			j=next[j];
			 
		}
	}
	next[++i]=-1;
}

void ShowNext(int next[])
{
	int i;

	for(i=1;next[i]!=-1;i++)
	{
		printf("%d ",next[i]);
	}
	printf("\n");
}




void  StrAssign(SString r,char *str)
{
	int i;
	int j=0;
	for(i=0;i<strlen(str);i++)
	{
		// printf("%d ",i);
		if(i>=MAXSTRLEN)continue;
		r[i+1]=*(str+i);		
		j++;
	}
	r[0]=j;
}
          
void StrPrintf(SString s)
{
	// printf("%s\n",s+1);	
	int i;
	for(i=1;i<=s[0];i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}

//求子串位置的定位函数
int Index_KMP(SString s,SString t,int pos,int next[])
{
	int i=pos,j=1;
	while(i<=s[0]&&j<=t[0])
	{
		if(j==0||s[i]==t[j])
		{
			++i,
			++j;
		}
		else
		{
			j=next[j];
		}
	}
	if(j>t[0])return i-t[0];
	else return -1;
}

int main(void)
{
	/*
	SString a;
	StrAssign(a,"abcdabcad");
	StrPrintf(a);
	int nn[100];
	get_next(a,nn);
	ShowNext(nn);

	SString b;
	StrAssign(b,"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa|abcdabcad|aaaaaaaaaaaaaa");

	printf("==================\n");
	StrPrintf(b);
	StrPrintf(a);
	ShowNext(nn);
	int r=Index_KMP(b,a,3,nn);
	printf("模式串的位置在:%d\n",r);
	*/

	SString b;
	StrAssign(b,"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa|abcdabcad|aaaaaaaaaaaaaasabcdefghijksfsdfsdfsdsdfaaaaaa");
	printf("%s\n",b+1);
	StrPrintf(b);



	return 0;
}
