#include<stdio.h>
int main (){
    long s,lon,lar;
    printf("entrer la longeur:");
    scanf("%ld",&lon);
    printf("entrer la largeur:");
    scanf("%ld",&lar);
    s = lar*lon;
    printf("la surface d un rectangle :%ld",s);
    return 0;
}