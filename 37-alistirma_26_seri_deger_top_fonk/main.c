#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void islem(int seri)
{
    int i,top=0;
    for(i=1;i<=seri;i++)
    {
        top+= pow(i,2);
    }
    printf("%d",top);
}

int main()
{
    int seri;
    printf("Seri degerini giriniz: ");
    scanf("%d",&seri);

    islem(seri);
    return 0;
}
