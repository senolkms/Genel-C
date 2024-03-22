#include <stdio.h>
#include <stdlib.h>

void dizi_olustur(int *p, int n)
{
    int i;
    printf("\nOlusturulan sayilar: ");
    for(i=0;i<n;i++)
    {
        p[i]=rand()%50;
        printf("%d ",p[i]);
    }

}
void dizi_sirala(int *e,int n)
{
    int i,j,gecici;
    /*for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            if(e[i]>e[j])
            {
                gecici=e[i];
                e[i]=e[j];
                e[j]=gecici;
            }
        }
    }

        }*/
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(e[j]>e[j+1])
            {
                gecici=e[j];
                e[j]=e[j+1];
                e[j+1]=gecici;
            }
        }
    }
    printf("\nDizinin siralanmis hali: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",e[i]);
    }


}
void dizi_buyuk(int *e,int n)
{
    int i,eb;
    eb=e[0];

    for(i=0;i<n;i++)
    {
        if(e[i]>eb)
        {
            eb=e[i];
        }
    }
    printf("\n1En buyuk eleman: %d",eb);
}

int main()
{
    int N,*p;
    printf("Kac adet sayi olacagini giriniz: ");
    scanf("%d",&N);

    p=(int *)malloc(N*sizeof(int));
    srand(time(0));
    dizi_olustur(p,N);
    dizi_sirala(p,N);
    dizi_buyuk(p,N);
    return 0;
}
