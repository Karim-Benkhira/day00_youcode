#include <stdio.h>

void CalculEtAffichageDesRésultats()
{
    float a;
    float b;

    printf("Entrez le premier nombre réel (a): ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre réel (b): ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Erreur...\n");
    }
}

int main()
{
    CalculEtAffichageDesRésultats();

    return 0;
}