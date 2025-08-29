#include<stdio.h>
#include<string.h>

int main(){
    char n[100];
    char prenom [100];
    int age =0;
    char email[100];
    char sexe [10];
    printf("=========Entrer vos informations personnells========");
    printf("\nEntrez votre nom : ");
    scanf("%s",&n);
    printf("Entrez votre prenom :");
    scanf("%s",&prenom);
    printf ("Quel votre age:");
    scanf("%d", &age);
    printf("sexe Homme-femme:");
    scanf("%s",&sexe);
    printf("Enter email:");
    scanf("%s", &email);
    printf("====Afichage de votre informations :=====");
    printf("\nVotre Nom :%s",&n);
    printf("\nVotre prenom :%s",&prenom);
    printf("\nVotre age: %d",age);
    printf("\nVotre email: %s",&email);
    printf("\nVotre sexe :%s",&sexe);
return 0;

}