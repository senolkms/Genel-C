#include <stdio.h>
#include <stdlib.h>

void cevir(int saniye)
{
    int dk,saat,sn,zaman;
    saat= saniye/3600;
    zaman= saniye%3600;
    dk= zaman/60;
    sn= saniye%60;

    printf("%d:%d:%d",saat,dk,sn);

}


int main()
{
    int saniye;
    printf("Saniye degerini giriniz: ");
    scanf("%d",&saniye);

    cevir(saniye);

    return 0;
}
