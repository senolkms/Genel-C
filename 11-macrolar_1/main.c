#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)

int main()
{
    float r,alan;
    printf("Yari cap degerini giriniz: ");
    scanf("%f",&r);
    alan=circleArea(r);
    printf("Alan : %f",alan);
    return 0;
}
