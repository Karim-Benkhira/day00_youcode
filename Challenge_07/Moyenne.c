#include <stdio.h>

void MoyennePondéréeDeTroisNombres()
{
    float a;
    float b;
    float c;
    float moyenne;

    printf("Entrez le premier nombre : \n");
    scanf("%f",&a);
    printf("Entrez le deuxième nombre:\n");
    scanf("%f",&b);
    printf("Entrez le troisième nombre:\n");
    scanf("%f",&c);

    moyenne = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);

    printf("La moyenne pondérée est: %.2f\n", moyenne);
} 

int main()
{
    MoyennePondéréeDeTroisNombres();

    return 0;
}