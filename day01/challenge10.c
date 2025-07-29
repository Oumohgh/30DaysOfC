#include<stdio.h>
#include<math.h>

int main (){
    double v;
    int r;
    printf("Entrer la rayon de la sphere :");
    scanf("%d",&r);
    
    v = 1.3 *3.14 * r*r*r;
    printf("la volume de sphere: %f",v);
    
    return 0;
}
