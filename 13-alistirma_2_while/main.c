#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,satir;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    i=0;
    satir=0;
    while(i<sayi)
    {
        printf("%4d ",i);
        i+=17; //if(i%17==0)
        satir++;
        if(satir%10==0)
        {
            printf("\n");
        }

    }

    return 0;
}
