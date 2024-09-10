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
    int i;
    int B[1000];
    i = 0;

    while (N > 0)
    {
        B[i] = N % 2;
        N = N / 2;

        i++;
    }

    for (int j= i-1; j >= 0; j--)
    {
        printf("%d",B[j]);
    }
    
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