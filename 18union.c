#include <stdio.h>
#include <string.h>

union Book
{
	char a;
	char b;
	char title[20];
};

int main(void)
{
	union Book book;
	book.a='a';
	book.b='b';
	for(int i=0;i<100;i++){
		int a="aa";
		

	}
	// strcpy(book.title,"x");
	printf("%c\n",book.a);
	printf("%c\n",book.b);

	// printf("%s\n",book.title);
}