#include <stdio.h>

double factorial(unsigned int i)
{
    if(i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int main()
{
    int i = 4;
   	printf("%dµÄ½×³ËÊÇ%f\n",i,factorial(i));


}