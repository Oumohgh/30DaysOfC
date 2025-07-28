#include<stdio.h>
int main (){
    float m;
    float x1,x2,x3,s1,s2,s3;
    printf("entrer 1er nombre x1:");
    scanf("%f",&x1);
     printf("entrer 2er nombre x2:");
    scanf("%f",&x2);
     printf("entrer 3er nombre x3:");
    scanf("%f",&x3);
    s1 =x1*2;
    s2=x2*3;
    s3=x3*5;
    m = (s1+s2+s3) / 10 ;
    printf("\nla moyenne ponderre de x1 ,x2 et x3 est :%.2f",m);
    return 0;
}