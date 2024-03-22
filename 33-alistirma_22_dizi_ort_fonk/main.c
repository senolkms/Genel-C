#include <stdio.h>
#include <stdlib.h>

float ortalama (int *a,int elemansayisi)
{
    int i,ort=0,top=0;
    for(i=0;i<elemansayisi;i++)
    {
        top+=a[i];
    }
    return (float)top/elemansayisi;
}


int main()
{
    int i,n;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[100];
    for(i=0;i<n;i++)
    {
        printf("%d. sayiyi giriniz: \n",i+1);
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);

    }
    printf("\nDizi elemanlarinin ortalamasi: %.2f",ortalama(dizi,n));

    return 0;
}
