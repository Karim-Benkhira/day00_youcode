#include <stdio.h>

void CelsiusToKelvin()
{
    float celsius;
    float kelvin;

    printf("Entrez la température en Celsius: \n");
    scanf("%f",&celsius);

    kelvin = celsius + 273.15;

    printf("La température en Kelvin est : %.2f K\n",kelvin);
}

int main()
{
    CelsiusToKelvin();

    return 0;
}