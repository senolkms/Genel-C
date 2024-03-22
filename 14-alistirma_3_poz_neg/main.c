#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sonuc;
    printf("Ýki tam sayi giriniz: \n");
    scanf("%d %d",&a,&b);

    if (a<0 && b<0 || a>0 && b>0)
    {
        printf("Sayilarin carpimi:(%d * %d) = %d",a,b,+1);

    }
    else if(a<0 && b>0 || a>0 && b<0)
    {
        printf("Sayilarin carpimi:(%d * %d) = %d",a,b,-1);

    }
    else
    {
        printf("Sayilarin carpimi:(%d * %d) = %d",a,b,0);
    }

    return 0;
}
