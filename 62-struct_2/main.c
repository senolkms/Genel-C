#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct ogrenci_bilgi{
    int no;
    char ad[20];
    char soyad[20];
    int yas;
    };

    struct ogrenci_bilgi ogrenci_1,ogrenci_2;
    ogrenci_1.no=220201118;
    strcpy(ogrenci_1.ad,"Senol");
    strcpy(ogrenci_1.soyad,"Kumas");
    ogrenci_1.yas=22;

    printf("Okul no: %d\nAdi: %s\nSoyadi:%s\nYasi:%d",ogrenci_1.no,ogrenci_1.ad,ogrenci_1.soyad,ogrenci_1.yas);

    ogrenci_2=ogrenci_1;
    return 0;
}
