#include <stdio.h>
#include <stdlib.h>
#define N 5

void bastirma(int matris[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%2d",matris[i][j]);
        }
    printf("\n");
    }
}
void simetrik(int mat[N][N],int *deger)
{
    int i,j;
    *deger=1;
    for(i=0;i<N;i++)
    {
        for(j=1;j<N;j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
                *deger=0;
            }
        }
    }

}

void diyagonal(int mat[N][N],int *diyagonalmi)
{
    int i,j;
    *diyagonalmi=1;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j && mat[i][j]!=0)
            {
                *diyagonalmi=0;
            }
        }
    }

}

int main()
{
    int d,e;
    int matris[N][N]=
    {
        {2,0,0,0,0},
        {0,6,0,0,0},
        {0,0,2,0,0},
        {0,0,0,7,0},
        {0,0,0,0,4}
    };
    bastirma(matris);
    simetrik(matris,&d);
    diyagonal(matris,&e);
    if(d==1)
    {
        printf("Bu matris simetriktir.\n");
    }
    else
    {
        printf("Bu matris simetrik degildir\n");
    }
    if(e)
    {
        printf("Bu matris diyagonaldir.\n");
    }
    else
    {
        printf("Bu matris diyagonal degildir");
    }


    return 0;
}
