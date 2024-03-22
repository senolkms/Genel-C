#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2

int main()
{
    int kod;
    float fiyat;

    printf("Lutfen urunun fiyatini giriniz\n");
    scanf("%f",&fiyat);
    printf("Lutfen urunun kodunu giriniz\n");
    scanf("%d",&kod);

    printf("Urunumuzun satis fiyati: ");

    switch(kod)
    {
    case KITAP:
        printf(" %f",fiyat+fiyat*VERGI_kitap/100);
        break;
    case TEMELGIDA:
        printf(" %f",fiyat+fiyat*VERGI_temelgida/100);
        break;
    case LUKS:
        printf(" %f",fiyat+fiyat*VERGI_luks/100);
        break;
    default:
        printf("Yanlis kod girdiniz...");

    }
    return 0;
}
