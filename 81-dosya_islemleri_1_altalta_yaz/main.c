#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char cumle[30];
    int N;

    dosya=fopen("bilgi.txt","w");

    if(dosya==NULL)
    {
        printf("Dosya bostur..");
    }
    else
    {
        printf("Cumlenizi giriniz: ");
        gets(cumle);
        printf("Satir sayisini giriniz: ");
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
            fprintf(dosya,"%s\n",cumle);
        }
    }
    fclose(dosya);
    printf("Bilgiler dosyaya yazildi");
    return 0;
}
