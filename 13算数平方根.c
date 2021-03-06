#include <stdio.h>

double DoSqrt(double z){
    double a=1;
    double b=0;
    double c=0;
    do{
        if(b*b<z){
            b+=a;
        }
        else{
            c=b;
            b-=a;
            a/=10;
        }
    }while(a>0.000001);

    return (b+c)/2;
}

int main(){
    double x, y;
    printf("请输入一个数字:");
    scanf("%lf", &x);
    if(x<0){
        printf("输入错误。");
    } else {
        y=DoSqrt(x);
        printf("%g 的平方根为: %g.\n", x, y);
    }

    int z=1;
    do{
        main();
        z++;
    }while(z>10);

    return 0;
}