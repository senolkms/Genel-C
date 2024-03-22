#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dk,ucret=0;
    printf("Konusma suresini giriniz: ");
    scanf("%f",&dk);
    if(dk<=3)
    {
        ucret=0.25;
    }
    else if(dk>3)
    {
        ucret=0.25+(dk-3)*0.08;
    }
    printf("Konusma suresi: %.2f\n",dk);
    printf("Ucretiniz: %.2f",ucret);

    return 0;
}
