#include <stdio.h>
#include <string.h>

#define sum 10

typedef struct book
{
	char title[20];
	char author[20];
} Mybook;



int main(void)
{
	Mybook one;
	strcpy(one.title,"title");
	strcpy(one.author,"me");

	for(int i=0;i<sum;i++)
	{
		printf("one.title is %s\n",one.title);
		printf("one.author is %s\n",one.author);
	}

}