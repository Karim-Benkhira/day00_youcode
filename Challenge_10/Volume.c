#include <stdio.h>
#include <math.h>

void VolumeDuneSphere()
{
    float P = 3.14159;
    float r,voulume;

    printf("Entrez le rayon de la sphère:  \n");
    scanf("%f",&r);

    voulume = (4 / 3) * P * pow(r,3);

    printf("Le volume de la sphère est: %.2f\n",voulume);
}

int main()
{
    VolumeDuneSphere();

    return 0;
}