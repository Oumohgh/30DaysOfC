#include<stdio.h>
int main(){
    float y,km;
    printf("Entrez la distance en kilometres :");
    scanf("%f",&km);
    y = km * 1093.61;
    printf("La distance en yards :%.2f",y);
    return 0;
}