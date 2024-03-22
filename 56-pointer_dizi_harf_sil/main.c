#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cumle[100];
    char sil;
    char *p;

    printf("Bir karakter dizisi giriniz: ");
    gets(cumle);
    printf("Kaldirmak istediginiz karakteri giriniz: ");
    scanf("%c",&sil);

    for(p=cumle;*p;p++)
    {
        if(*p==sil)
        {
            strcpy(p,p+1);
        }
    }
    printf("Karakter dizisinin son hali:%s",cumle);

    return 0;
}
