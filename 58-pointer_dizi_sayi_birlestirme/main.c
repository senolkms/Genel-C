#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1,n2,adt1=1,adt2=1;
    printf("Ilk dizimizin eleman sayisini giriniz: ");
    scanf("%d",&n1);
    int A[n1];
    int *p1,*p2;
    for(p1=A;p1<A+n1;p1++)
    {
        printf("Eleman %d: ",adt1);
        scanf("%d",p1);
        adt1++;
    }
    printf("\nIlk dizimiz ");
    for(i=0;i<n1;i++)
    {
        printf("%3d ",*(A+i));
    }
    printf("\nIkinci dizimizin eleman sayisini giriniz: ");
    scanf("%d",&n2);
    int B[n2];
    for(p2=B;p2<B+n2;p2++)
    {
        printf("Eleman %d: ",adt2);
        scanf("%d",p2);
        adt2++;
    }
    printf("\nIkinci dizimiz ");
    for(i=0;i<n2;i++)
    {
        printf("%3d ",*(B+i));
    }
    for(p1=A+n1,p2=B;p2<B+n2;p1++,p2++) // p2 nin ilk elemaný p1 in sonuna eklenmiþ oldu
    {
        *p1=*p2;

    }
    printf("\nB nin A nin sonuna eklenmis hali: ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%3d ",*(A+i));
    }

    return 0;
}
