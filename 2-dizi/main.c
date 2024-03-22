#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][4]={{1,4,5,6},{2,5,6,3},{5,11,2,4}};
    int dizi2[3][4]={{1,4,5,6},{2,5,6,3},{5,11,2,4}};
    int toplam[3][4];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",toplam[i][j]);
        }
        printf("\n");
    }
    return 0;
}
