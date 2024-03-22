#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2;
    int i,N;
    int tek=0,cift=0;

    printf("Tam sayiyi giriniz: ");
    scanf("%d",&N);

    p1=(int *)malloc(N*sizeof(int));
    p2=(int *)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        if(i%2==0)
        {
            *(p1+cift)=i;
            cift++;
        }
        else
        {
            *(p2+tek)=i;
            tek++;
        }
    }
    printf("Cift sayilar: ");
    for(i=0;i<cift;i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\nTek sayilar: ");
    for(i=0;i<tek;i++)
    {
        printf("%d ",*(p2+i));
    }
    return 0;
}
