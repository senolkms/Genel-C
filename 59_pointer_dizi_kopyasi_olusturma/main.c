#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main()
{
    char dizi[MAX]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
    char *p1;
    char *p2;
    char dizi_copy[MAX];
    int i;

    p2=dizi_copy;
    printf("Dizinin orjinal hali: ");
    for(i=0;i<MAX;i++)
    {
        printf("%c ",dizi[i]);
    }
    for(p1=dizi;p1<dizi+MAX;p1++)
    {
        *p2=*p1;
        p2++;
    }
    printf("\nDizinin kopya hali: ");

    for(i=0;i<MAX;i++)
    {
        printf("%c ",*(dizi_copy+i));
    }

    return 0;
}
