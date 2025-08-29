#include<stdio.h>

int main (){
    int num;
    printf("Entrer un numero :");
    scanf("%d",&num);
    if (num % 2 ==0)
    printf(" %d est pair",num);
    else
     printf(" %d est impair",num);
     return 0;
}