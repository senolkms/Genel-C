#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    1-Galeri sahibi i�in araba adl� bir yap� tipi tan�mlay�n�z.Bu yap�daki ilk eleman
    araban�n sat�l�p sat�lmad���n� tutmal�d�r.E�er araba sat�ld�ysa 1 de�erini,sat�lmad�ysa
    0 de�erini alacakt�r.�kinci eleman ise birle�im tipinde tan�mlanmal� ve e�er araba sat�ld�ysa
    sat�� de�eri,sat�lmad�ysa araban�n markas� tutulmal�d�r.
    2-araba_A de�i�kenini araba yap� tipinende tan�mlay�n�z.
    3-araba_A de�i�kenine sat�lmam�� olan "Anadol" marka araban�n blgilerini atay�n�z.
    4-"Anadol" marka araba 20000 tl ye sat�l�nca araba_A de�i�keninde gereken
    g�ncellemeleri yap�n�z.


    struct araba{

    int satis;
    union{
    double fiyat;
    char marka[20];
    }bilgi;

    };


    struct araba araba_A;


    araba_A.satis=0;
    strcpy(araba_A.bilgi.marka,"Anadol");


    araba_A.satis=1;
    araba_A.bilgi.fiyat=20000;

    return 0;
}
