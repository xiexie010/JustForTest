#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define newline '\n'

int main(void)
{
	int a=030ul;
	printf("value of a:\t%d\n",a);
	printf("hello, dear\n");
	printf("hello, " "d" "ear\n");
	printf("hello, \
		dear\n");


	int area;
	area=LENGTH*WIDTH;
	printf("value of area:%d\n",area);
	printf("%c\n",newline);
	return 0;
}
