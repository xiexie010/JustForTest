#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char buf[255];

    fp = fopen("C:\\Users\\Administrator\\Desktop\\study\\c\\file\\b.txt", "r");

    fscanf(fp, "%s", buf);
    printf("1 is %s\n", buf);

    fgets(buf, 255, fp);
    printf("2 is %s\n", buf);

    fgets(buf, 255, fp);
    printf("2 is %s\n", buf);



}