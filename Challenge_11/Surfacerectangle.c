#include <stdio.h>
#include <math.h>

void SurfaceRectangle()
{
    float longueur,largeur,Surface;

    printf("Entrez la longueur du rectangle:\n");
    scanf("%f",&longueur);
    printf("Entrez la largeur du rectangle: \n");
    scanf("%f",&largeur);

    Surface = longueur * largeur;

    printf("La surface du rectangle est: %.2f\n",Surface);
}

int main()
{
    SurfaceRectangle();

    return 0;
}