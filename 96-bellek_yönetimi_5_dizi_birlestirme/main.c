#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dizi1,*dizi2,*dizi3;
    int i,n,m;
    int sayac=0;

    srand(time(0));
    printf("Birinci dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);
    dizi1=(int *)calloc(n,sizeof(int));
    printf("Birinci dizi: ");
    for(i=0;i<n;i++)
    {
        *(dizi1+i)=rand()%50;
        printf("%d ",*(dizi1+i));
    }
    printf("\nIkinci dizinin eleman sayisini giriniz: ");
    scanf("%d",&m);
    dizi2=(int *)calloc(m,sizeof(int));
    printf("Ikinci dizi: ");
    for(i=0;i<m;i++)
    {
        *(dizi2+i)=rand()%50;
        printf("%d ",*(dizi2+i));
    }

    dizi3=(int *)calloc(n+m,sizeof(int));
    for(i=0;i<n;i++)
    {
        *(dizi3+sayac)=*(dizi1+i);
        sayac++;
    }
    for(i=0;i<m;i++)
    {
        *(dizi3+sayac)=*(dizi2+i);
        sayac++;
    }
    printf("\nDiziminin birlestirilmis hali: ");
    for(i=0;i<sayac;i++)
    {
        printf("%d ",*(dizi3+i));
    }

    return 0;
}
