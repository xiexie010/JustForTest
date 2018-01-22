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
    printf("������һ������:");
    scanf("%lf", &x);
    if(x<0){
        printf("�������");
    } else {
        y=DoSqrt(x);
        printf("%g ��ƽ����Ϊ: %g.\n", x, y);
    }

    int z=1;
    do{
        main();
        z++;
    }while(z>10);

    return 0;
}