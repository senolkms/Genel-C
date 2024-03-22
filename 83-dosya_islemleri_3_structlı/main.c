#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
    char adsoyad[20];
    char ders[20];
    int vize1;
    int vize2;
    int finalnotu;

};

int main()
{
    int N,i,ort;
    printf("Ogrenci sayisini giriniz:");
    scanf("%d",&N);
    struct ogrenci ogr[N];
    FILE *dosya;
    dosya=fopen("ogrenci.txt","w");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi.");
    }
    else
    {
        for(i=0;i<N;i++)
        {
            fflush(stdin);
            printf("Ogrenci adsoyad giriniz: ");
            gets(ogr[i].adsoyad);
            printf("\nDers adini giriniz: ");
            gets(ogr[i].ders);
            printf("\nVize 1: ");
            scanf("%d",&ogr[i].vize1);
            printf("\nVize 2: ");
            scanf("%d",&ogr[i].vize2);
            printf("\nFinal : ");
            scanf("%d",&ogr[i].finalnotu);
            ort=ogr[i].vize1*0.2+ogr[i].vize2*0.2+ogr[i].finalnotu*0.6;
            fprintf(dosya,"Adsoyad:%s\n Ders:%s\n Vize1:%d\n Vize2:%d\n Final:%d\n Ortalama:%d\n",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize1,ogr[i].vize2,ogr[i].finalnotu,ort);
        }

    }

    return 0;
}
