#include<stdio.h>
#include<ctype.h>

int main (){

    char c;
    printf("Ecriver un lettre :");
    scanf("%c",&c);
 if(c >= 'A' && c <= 'Z') {
         c = c + 32;
 }
    switch (c)
    {
        case 'a' :printf(" est une voyelle");
        break;
        case 'i' :printf(" est une voyelle");
        break;
        case 'e' :printf(" est une voyelle");
        break;
        case 'u' :printf(" est une voyelle");
        break;
        case 'o' :printf(" est une voyelle");
        break;
        case 'y' :printf("est une voyelle");
        break;
        default: 
        printf("cette lettre est consonne");
        return 0;
    }

}
