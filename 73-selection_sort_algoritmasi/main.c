#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int konum;
    int gecici;
    int N;
    printf("Kac adet sayi girilecek\n");
    scanf("%d",&N);

    int dizi[N];

    printf("Dizi elemanlari\n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    for(i=0;i<(N-1);i++)
    {
        konum=i;
        for(j=i+1;j<N;j++)
        {
            if(dizi[konum]>dizi[j])
            {
                konum=j;
            }
        }
        if(konum != i)
        {
            gecici=dizi[i];
            dizi[i]=dizi[konum];
            dizi[konum]=gecici;
        }
    }

    printf("\n Siralanmis Dizi Elemanlari\n");
    for(i=0;i<N;i++)
    {

        printf("%d\t",dizi[i]);
    }


    return 0;
}
