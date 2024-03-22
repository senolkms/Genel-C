#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *p1,*p2,adet=1;
    int gecici;
    printf("Dizinin eleman sayisini girin: ");
    scanf("%d",&n);

    int arr[n];
    for(p1=arr;p1<arr+n;p1++)
    {
        printf("Eleman %d:\n",adet);
        scanf("%d",p1);
        adet++;

    }
    printf("\nDizimizin normal hali: ");
    for(p1=arr;p1<arr+n;p1++)
    {
        printf("%d ",*p1);
    }

    for(p1=arr,p2=arr+n-1;p1<p2;p1++,p2--)
    {
        gecici=*p1;
        *p1=*p2;
        *p2=gecici;

    }
    printf("\nDizimizin yer degistirmis hali: ");
    for(p1=arr;p1<arr+n;p1++)
    {
        printf("%d ",*p1);
    }
    return 0;
}
