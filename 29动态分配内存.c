#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];
	char *description;
	strcpy(name,"xiexiexiexie  xie");

	description=malloc(100*sizeof(char));
	if(description==NULL)
	{
		fprintf(stderr,"Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description,"sfdsfsdfsfsdfsdf");

	}

	printf("%s\n",name);
	printf("%s\n",description);

	free(description);
}