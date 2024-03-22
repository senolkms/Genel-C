#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("bilgi.txt","r");
    char satir[100],*karakter;

    if(dosya==NULL)
    {
        printf("Dosya olusturalamadi");
    }
    else
    {
        do{
            karakter=fgets(satir,100,dosya);
            if(karakter!=NULL)
            {
                printf("%s",karakter);
            }
        }while(karakter!=NULL);

    fclose(dosya);
    }


    return 0;
}
