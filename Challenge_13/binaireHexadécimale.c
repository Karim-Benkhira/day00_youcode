#include <stdio.h>

int LireNumber()
{
    int Number;

    printf("Entrez un nombre entier :");
    scanf("%d",&Number);

    return Number;
}

void afficherBinaire(int N)
{
    if(N > 1)
        afficherBinaire(N / 2);

    printf("%d",N % 10);
}

int main()
{
    int Number;
    Number = LireNumber();

    printf("Valeur hexadécimale : %X\n",Number);

    printf("Valeur binaire : ");
    afficherBinaire(Number);
    printf("\n");

    return 0;
}