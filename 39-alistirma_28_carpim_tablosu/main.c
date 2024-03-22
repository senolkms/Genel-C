#include <stdio.h>
#include <stdlib.h>
#define boyut 10

int main()
{

    int i,j;
    printf("%4c",'I');

    for(i=1;i<=boyut;i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    printf("-----------");
    for(i=1;i<boyut;i++)
    {
        printf("----");
    }
    printf("\n");
    for(i=1;i<=boyut;i++)
    {
        printf("%4d",i);
        for(j=1;j<=boyut;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }

    return 0;
}
