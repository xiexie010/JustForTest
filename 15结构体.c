#include <stdio.h>
#include <string.h>

struct Books
{
	char title[20];
	char author[50];
	int book_id
};
	
void printfBook(struct Books book)
{
	printf("title of book is %s\n",book.title);
	printf("author of book is %s\n",book.author);
	printf("book_id of book is %d\n",book.book_id);
}

int main()
{
	struct Books one;        /* 声明 Book1，类型为 Books */
	struct Books two;
	strcpy(one.title,"xie");
	one.book_id=20;
	// printf("%d\n",one.book_id);
	// printf("%s\n",one.title);
	printfBook(one);
	printfBook(two);
	return 0;

}