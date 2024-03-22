#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x;

    do
    {
        printf("x degerini giriniz: ");
        scanf("%f",&x);
        if(x<0)
        {
            printf("Lutfen pozitif sayi giriniz: \n");
            continue;
        }
        printf("Sayinin karakökü: %.2f\n",sqrt(x));
    }
    while(x);

    return 0;
}
