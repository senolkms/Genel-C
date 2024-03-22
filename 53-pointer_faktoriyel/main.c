#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int *sayi)
{
    int i,fak=1;
    for(i=*sayi;i>=1;i--)
    {
        fak*=(*sayi);
        (*sayi)--;
    }
    return fak;
}


int main()
{
    int sayi,sonuc,orjinalsayi;
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: \n");
    scanf("%d",&sayi);
    orjinalsayi=sayi;
    sonuc=faktoriyel(&sayi);
    printf("%d sayisinin faktoriyeli %d dir",orjinalsayi,sonuc);
    return 0;
}
