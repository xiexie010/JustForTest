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
			printf("c����d\n");
			break;
		default:
			printf("��Ч�ĳɼ�\n");
	}
	return 0;
}