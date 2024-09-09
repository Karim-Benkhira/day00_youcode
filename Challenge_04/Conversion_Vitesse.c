#include <stdio.h>

void ConversionDeLaVitesse()
{
    float km_h;
    float ms;

    printf("Entrez la vitesse en km/h :");
    scanf("%f",&km_h);

    ms = km_h  * 0.27778;

    printf("La vitesse en m/s est : %.2f m/s\n",ms);
}

int main()
{
    ConversionDeLaVitesse();

    return 0;
}
