#include<stdio.h>
int main (){
    int choix;
    long int  n;
    printf("Enter le nombre d annees: ");
        scanf("%ld",&n);
     printf("\n----Menu---");
      
       printf("\n1-convertir en mois:");
        printf("\n2-convertir en jours:");
        printf("\n3-convertir en heures:");
        printf("\n4-convertir en minutes:");
        printf("\n5-convertir en secondes:");
        printf("\nChoisir un choix :");
        scanf("%d",&choix);
        
        switch (choix)
        {
        case 1:
            printf("\nconverstion de %ld  en mois est %ld",n,12*n);
            break;
         case 2:
             printf("\nconverstion de %ld en jours est %ld",n,365*n);
            break;
           case 3:
             printf("\nconverstion de %ld annes en heures est %ld",n,8760*n);
            break;
             case 4:
             printf("\nconverstion de %ld en minutes est %ld",n,525600*n);
            break;
            case 5:
             printf("\nconverstion de %ld en minutes est %ld",n,31536000*n);
            break;
           
        default: printf("invalid choix");
        break;
        }  
 return 0;   
}