#include <stdio.h>

void ConversionDeLaDistance()
{
    float Km ;
    float Yards;

    printf("Entrez la distance en kilomètres :\n");
    scanf("%f",&Km);

    Yards =  Km * 1093.61;

    printf("La distance en yards est : %.2f yards\n",Yards);
}

int main()
{
    ConversionDeLaDistance();

    return 0;
}