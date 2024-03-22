#include <stdio.h>
#include <stdlib.h>


struct karmasiksayi{

    float a,b;
};

int main()
{
    struct karmasiksayi sayi1,sayi2,sonuc;
    char opr;
    printf("Lutfen yapmak istediginiz islemi giriniz ( + - ): ");
    scanf("%c",&opr);

    printf("Birinci karmasik sayi: ");
    scanf("%f%f",&sayi1.a,&sayi1.b);
    printf("Ikinci karmasik sayi: ");
    scanf("%f%f",&sayi2.a,&sayi2.b);

    if(opr=='+')
    {
        sonuc.a=sayi1.a+sayi2.a;
        sonuc.b=sayi1.b+sayi2.b;
    }
    else if(opr=='-')
    {
        sonuc.a=sayi1.a-sayi2.a;
        sonuc.b=sayi1.b-sayi2.b;
    }
    else
    {
        printf("Düzgün karakter giriniz: ");
    }
    printf("Sonuc:\n");
    printf("%.2f",sonuc.a);

    if(sonuc.b<0)
    {
        printf(" %.2f i",sonuc.b);
    }
    else
    {
        printf(" + %.2f i",sonuc.b);
    }
    return 0;
}
