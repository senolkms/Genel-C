#include <stdio.h>
#include <stdlib.h>

int enBuyuk (int a[],int n)
{
    int i,eb=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>eb)
        {
            eb=a[i];
        }
    }
    return eb;
}
int enKucuk (int a[],int n)
{
    int i,ek=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<ek)
        {
            ek=a[i];
        }
    }
    return ek;
}




int main()
{
    int n,i;
    printf("Adet sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));

    printf("Dizi elemanlari: \n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\nEn buyuk degeri: %d",enBuyuk(dizi,n));
    printf("\nEn kucuk degeri: %d",enKucuk(dizi,n));
    return 0;
}
