#include <stdio.h>
#include <stdlib.h>

void yerdegistirnormal(int sayi1,int sayi2)
{
    int gecici;
    gecici=sayi1;
    sayi1 = sayi2;
    sayi2 = gecici;
/*
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);*/
}

void yerdegistir(int *sayi1,int *sayi2)
{
    int gecici;
    gecici=*sayi1;
    *sayi1 = *sayi2;
    *sayi2 = gecici;
/*
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",*sayi1);
    printf("Ikinci sayim = %d\n",*sayi2);*/
}


int main()
{
    //Pointer kullanarak iki say�y�n�n yerini de�i�tirip say�lar� yerde�i�tirmeden �nce
    //ve yerde�i�tirdikten sonra console a bast�r�n�z

    int sayi1,sayi2;

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("Sayilarim yer degistirmeden once\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);

    yerdegistir(&sayi1,&sayi2);
    //yerdegistirnormal(sayi1,sayi2);
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);



    return 0;
}
