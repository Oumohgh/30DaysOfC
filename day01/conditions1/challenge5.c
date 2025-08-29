#include<stdio.h>
int main (){
    int choix;
    long n;
    printf("Enter le nombre d annees ");
    scanf("%.2ld",&n);
    do
    {
        printf("--Entrer votre choix de covertir: ");
        printf("1-convertir en mois");
        printf("2-convertir en jours");
        printf("3-convertir en heures");
        printf("4-convertir en minutes");
        printf("5-convertir en secondes");
        printf("6-quitter");
        scanf("%d",&choix);
        switch (choix)
        {
        case '1':
            printf("converstion de %ld  en mois est %ld",n,12*n);
            break;
         case '2':
             printf("converstion de %ld en jours est %ld",n,365*n);
            break;
           case '3':
             printf("converstion de %ld en heures est %ld",n,8760*n);
            break;
             case '4':
             printf("converstion de %ld en minutes est %ld",n,525600*n);
            break;
            case '5':
             printf("converstion de %ld en minutes est %ld",n,31536000*n);
            break;
        default:
        printf("veuillez entrer un choix");
        
        }
        
    } while (choix != 0);
 return 0;   
}