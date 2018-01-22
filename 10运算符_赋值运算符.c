#include <stdio.h>
int main()
{
	int a=21;
	int c;

	c=a;
	printf("%d\n",c);//21

	c+=a;
	printf("%d\n",c);//42

	c-=a;
	printf("%d\n",c);//21

	c*=a;
	printf("%d\n",c);//441

	c/=a;
	printf("%d\n",c);

	c%=a;
	printf("%d\n",c);

	c=200;
	c<<=2;
	printf("%d\n",c);//800

	c>>=2;
	printf("%d\n",c);//200

	c&=2;
	printf("%d\n",c);//0

	c|=2;
	printf("%d\n",c);//2

	c^=2;
	printf("%d\n",c);//

	c=0;
	c=~c;
	printf("%d\n",c);

}