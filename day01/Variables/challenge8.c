#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,m,g;
    printf("entrer a :");
    scanf("%f",&a);
    printf("entrer b :");
    scanf("%f",&b);
    printf("entrer c :");
    scanf("%f",&c);
    m = a*b*c;
    g = pow(m, 1.00/3.00);
    printf("la moyenne geometrique est : %f",g);

  return 0;
}