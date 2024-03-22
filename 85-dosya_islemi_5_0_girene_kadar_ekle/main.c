#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    FILE *dosya;
    dosya=fopen("senol.txt","w");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi");
    }
    else{

        for(int i=0;;i++)
        {
            printf("\nEklemek istediginiz bilgileri giriniz: ");
            gets(cumle);
            if(cumle[0]=='0')
            {
                exit(1);
            }
            else
            {
                fprintf(dosya,"%s\n",cumle);
            }
        }
        fclose(dosya);
    }

    /*
    while(1)
    {
       printf("\nEklemek istediginiz bilgileri giriniz: ");
       gets(cumle);
       if(cumle[0]=='0')
        {
            exit(1);
        }
       else
       {
            dosya=fopen("senol.txt","w");
            if(dosya==NULL)
            {
                printf("Dosya bulunamadi");
            }
            else
            {
                fprintf(dosya,"%s\n",cumle);
                fclose(dosya);
            }
       }

    }
    }*/

    return 0;
}
