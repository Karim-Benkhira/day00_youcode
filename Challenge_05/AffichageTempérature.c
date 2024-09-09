#include <stdio.h>

void AffichageTempérature()
{
    float celsius;

    printf("Entrez la température en Celsius: ");
    scanf("%f", &celsius);

   if (celsius < 0) {
        printf("L'eau est à l'état solide .\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("L'eau est à l'état liquide.\n");
    } else {
        printf("L'eau est à l'état gazeux .\n");
    }
}

int main()
{
    AffichageTempérature();

    return 0;
}