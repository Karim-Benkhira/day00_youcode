#include <stdio.h>

void NombreEntierAQuatreChiffresEnOrdreInverse()
{
    int number1,number2,number3,number4;
    int num,reverse;

    printf("Entrez un nombre entier à quatre chiffres : \n");
    scanf("%d",&num);

    number1 = num % 10;
    number2 = (num / 10) % 10;
    number3 = (num / 100) % 10;
    number4 = (num / 1000) % 10;

    reverse = number1 * 1000 + number2 * 100 + number3 * 10 + number4;

    printf("Le nombre inverse est : %d\n",reverse);
}

int main()
{
    NombreEntierAQuatreChiffresEnOrdreInverse();

    return 0;
}