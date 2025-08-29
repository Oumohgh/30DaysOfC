#include<stdio.h>
int main (){
    float m,km;
    printf("Entrer la vitesse en km/h:");
    scanf("%f",&km);
    if (km >0){
        m = km * 0.27778;
    printf("La vitesse en metres par seconde : %.4f",m);
    
    }else
printf("vueillez entrer une vitesse positif");
    return 0;
}