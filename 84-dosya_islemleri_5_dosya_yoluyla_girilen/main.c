#include <stdio.h>
#include <stdlib.h>

int main()
{
    char satir[100],dosyaismi[50];
    char *karakter;
    printf("Dosya ismini ve uzantisini giriniz: ");
    gets(dosyaismi);
    FILE *dosya;
    dosya=fopen(dosyaismi,"r");
    if(dosya==NULL)
    {
        printf("Dosya bulunamadi");
    }
    else
    {
        do{
            karakter=fgets(satir,100,dosya);
            if(karakter!=NULL)
            {
                printf("%s",satir);
            }

        }while(karakter != NULL);

        fclose(dosya);
    }
    return 0;
}
