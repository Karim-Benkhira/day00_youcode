#include <stdio.h>
#include <math.h>

void CalculDeLaMoyenneGéométrique() 
{
    float a;
    float b;
    float c;
    float M;

    printf("Entrez le premier nombre: ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre: ");
    scanf("%f", &b);

    printf("Entrez le troisième nombre: ");
    scanf("%f", &c);

    M =pow(a * b * c, 1.0 / 3.0);

     printf("La moyenne géométrique est: %.2f\n", M);
}

int main()
{
    CalculDeLaMoyenneGéométrique();

    return 0;
}
