#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

void matris_olustur(int matris[A][B])
{
    int i,j;

    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }
}
void print_tablo(int matris[A][B])
{
    int i,j;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }

}

void makmintop(int matris[A][B],int *max,int *min,int *top)
{

    int i,j;
    *max=matris[0][0];
    *min=matris[0][0];
    *top=0;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(matris[i][j]<*min)
            {
                *min=matris[i][j];
            }
            if(matris[i][j]>*max)
            {
                *max=matris[i][j];
            }
            *top+=matris[i][j];
        }
    }
}
int main()
{
    int i,j,min,max,top;
    int matris[A][B];

    printf("%d * %d tipinde bir matris girin: \n",A,B);
    matris_olustur(matris);
    print_tablo(matris);
    makmintop(matris,&max,&min,&top);
    printf("En yuksek deger:  %d\n",max);
    printf("En kucuk deger:   %d\n",min);
    printf("Deger toplamlari: %d ",top);

    return 0;
}
