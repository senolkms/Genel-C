#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi,j,a=1;
    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",a);
            a++;

        }
        printf("\n");
    }

    return 0;
}
