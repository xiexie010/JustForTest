#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=21;
	int b=10;
	int c;

	c=a+b;
	printf("c��ֵΪ%d\n",c);

	c=a-b;
	printf("c��ֵΪ%d\n",c);

	c=a*b;
	printf("c��ֵΪ%d\n",c);

	c=a/b;
	printf("c��ֵΪ%d\n",c);

	c=a%b;
	printf("c��ֵΪ%d\n",c);

	c=a++;
	printf("c��ֵΪ%d\n",c);

	c=a--;
	printf("c��ֵΪ%d\n",c);
	return 0;
}