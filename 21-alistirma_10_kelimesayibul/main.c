#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[100];
    int i=0,sayac=0;
    printf("C�mle giriniz: ");
    gets(cumle);

    while(cumle[i]) //c�mle d�ng� bitmeden ��kmas�n diye i
    {
        if(cumle[i]==32) //ascii tab. g�re bo�luk=32
        {
            sayac++;
        }
        i++;
    }
    printf("Cumlemizdeki kelime sayisi: %d",sayac+1);
    return 0;
}
