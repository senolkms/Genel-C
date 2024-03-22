#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    char *p1,*p2;
    int kontrol;

    printf("Cumleyi giriniz: ");
    gets(cumle);
    kontrol=1;

    for(p2=cumle;*p2;p2++);

    p2--;

    for(p1=cumle; kontrol && p1<p2;p1++,p2--)
    {
        if(*p1!=*p2)
        {
            kontrol=0;
        }
    }
    if(kontrol)
    {
        printf("%s polindromdur. ",cumle);
    }
    else
    {
        printf("%s polindrom degildir ",cumle);
    }

    return 0;
}
