#include<stdio.h>

int main (){
   int n,rev,d1,d2,d3,d4;
   printf("enter un nombre entier  entre 1000 et 9999:");
   scanf("%d",&n);
   d1 = n / 1000;
   d2 = (n /100) %10;
   d3 = (n/10) %10;
   d4 = n%10;
   
  printf("le nombre iverse est :%d%d%d%d",d4,d3,d2,d1);
  

   return 0; 
}