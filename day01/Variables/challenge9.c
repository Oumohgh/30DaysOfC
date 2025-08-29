#include<stdio.h>
#include<math.h>
int main ( ){
    double ix,iy,iz,p1,p2,p3;
    double d;
    float x1,x2,y1,y2,z1,z2;
    printf("Entrer les coordonnes de M1:");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Entrer les coordonnes de M2:");
    scanf("%f%f%f",&x2,&y2,&z2);
    ix =x2-x1;
    iy =y2-y1;
    iz =z2-z1;
    p1=pow(ix,2);
    p2=pow(iy,2);
    p3=pow(iz,2);
    d =sqrt(p1+p2+p3);
    printf("la distance entre deux points dans un espace 3D :%lf",d);
    return 0;
}   


