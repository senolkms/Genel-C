#include <stdio.h>
#include <stdlib.h>

void birlestir(int a[],int b[],int c[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=1;i<=k;i++)
    {
        c[n]=b[0];
        c[n+i]=b[i];
    }

    /*int i,j,sayac=0;
    for(i=0;i<N;i++)
    {
        C[sayac]=A[i];
        sayac++;
    }
    for(j=0;j<K;j++)
    {
        C[sayac]=B[j];
        sayac++;
    } */

}


int main()
{
    int i,n,k;
    printf("1. dizinin eleman sayisini giriniz: \n");
    scanf("%d",&n);
    int dizi1[n];

    printf("1. dizinin elemanlarini giriniz: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi1[i]);
    }

    printf("\n2. dizinin eleman sayisini giriniz: \n");
    scanf("%d",&k);
    int dizi2[k];
    printf("2. dizinin elemanlarini giriniz: \n");
    for(i=0;i<k;i++)
    {
        scanf("%d",&dizi2[i]);
    }

    int dizi3[n+k];
    birlestir(dizi1,dizi2,dizi3,n,k);

    for(i=0;i<n+k;i++)
    {
        printf("%d ",dizi3[i]);
    }
    return 0;
}
