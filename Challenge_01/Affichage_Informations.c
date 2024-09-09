#include <stdio.h>

void ReadInformation()
{
    char Nom[50];
    char Prenom[50];
    int Age;
    char Sexe[20];
    char Email[100];

    printf("Veuillez entrer votre nom : \n");
    scanf("%s",Nom);
    printf("Veuillez entrer votre Prenom : \n");
    scanf("%s",Prenom);
    printf("Veuillez entrer votre Age : \n");
    scanf("%d",&Age);
    printf("Veuillez entrer votre sexe (Homme/Femme): ");
    scanf("%s", Sexe);
    printf("Veuillez entrer votre nom : \n");
    scanf("%s",Email);

    printf("\n--- Informations ---\n");
    printf("Nom: %s\n", Nom);
    printf("Prénom: %s\n", Prenom);
    printf("Âge: %d\n", Age);
    printf("Sexe: %s\n", Sexe);
    printf("Email: %s\n", Email);

}

int main()
{
    ReadInformation();

    return 0;   
}