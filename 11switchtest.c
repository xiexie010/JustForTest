#include <stdio.h>
int main(void)
{
	char grade='b';

	switch(grade)
	{
		case 'a':
			printf("a\n");
			break;
		case 'b':
			printf("b\n");
			break;
		case 'c':
		case 'd':
			printf("c或者d\n");
			break;
		default:
			printf("无效的成绩\n");
	}
	return 0;
}