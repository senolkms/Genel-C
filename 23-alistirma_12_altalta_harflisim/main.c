#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kelime[100];
    int i,j;
    printf("kelime giriniz: ");
    gets(kelime);

    for(i=0;i<strlen(kelime);i++)
    {
        j=0;
        for(j=0;j<=i;j++)
        {
            printf("%c",kelime[j]);
        }
        printf("\n");
    }

    return 0;
}
