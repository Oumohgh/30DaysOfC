#include<stdio.h>
int main (){
    float c;
    printf("Entrez la temperature de l%ceau en celsius ",39);
    scanf("%f",&c);
    if (c <0){
        printf("l%cetat de l%ceau de cette tempearture est solide",39,39);
    } else if (c>=0 && c<100){
    printf("l%cetat de l%ceau de cette temppearture est liquide",39,39);
        
    } else {
    printf("l%cetat de l%ceau de cette temppearture est gaz",39,39);
        }
    return 0;
}
