#include <stdio.h>
#include <math.h>

void LaDistanceEntreDeuxPointsDansUnEspace3D()
{
    float x1,y1,z1;
    float x2,y2,z2;
    float LaDistance;

    printf("Entrez les coordonnées de la première point (x1, y1, z1): \n");
    scanf("%f %f %f",&x1,&y1,&z1);

    printf("Entrez les coordonnées de la deuxième point (x2, y2, z2) : \n");
    scanf("%f %f %f",&x2,&y2,&z2);

    LaDistance = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));

    printf("La distance entre les deux points est: %.2f\n",LaDistance);

}

int main()
{
    LaDistanceEntreDeuxPointsDansUnEspace3D();

    return 0;
}