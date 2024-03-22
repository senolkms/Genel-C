#include <stdio.h>
#include <stdlib.h>

void sil (int a[],int n,int del)
{
    int i;
    if(del>n)
    {
        printf("Gecerli eleman sayisi giriniz: ");
    }
    else
    {
        for(i=del-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("\nDizinin son hali: ");
        for(i=0;i<n-1;i++)
        {
            printf("%d \n",a[i]);
        }
    }
}

int main()
{
    int n,i,del,son;
    printf("Adet sayisini giriniz: ");
    scanf("%d",&n);
    srand(time(0));
    int dizi[n];

    printf("Dizinin elemanlarý: ");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\nKacinci elemani silmek istiyorsun: ");
    scanf("%d",&del);
    sil(dizi,n,del);


    return 0;
}
