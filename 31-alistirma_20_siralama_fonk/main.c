#include <stdio.h>
#include <stdlib.h>

void sirala(int a[],int adet)
{
    int i,j,tmp=0;
    for(i=0;i<adet-1;i++)
    {
        for(j=0;j<adet-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

}


int main()
{
    int n,i;
    printf("Adet sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[100];
    srand(time(0));

    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\nDizinin sirali hali : \n");
    sirala(dizi,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }

    return 0;
}
