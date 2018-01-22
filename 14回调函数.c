#include <stdio.h>



//»Øµ÷º¯Êý
int getNextRandomValue(void)
{
	return rand();
}

void populate_array(int *array,size_t array_size , int (*getNextValue)(void))
{
	for(size_t i=0;i<array_size;i++)
	{
		array[i]=getNextValue();
	}
}

int main(){
	int myarray[10];
	populate_array(myarray,10,getNextRandomValue);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",myarray[i]);
	}
	return 0;
}