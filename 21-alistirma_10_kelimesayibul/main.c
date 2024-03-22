#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[100];
    int i=0,sayac=0;
    printf("Cümle giriniz: ");
    gets(cumle);

    while(cumle[i]) //cümle döngü bitmeden çýkmasýn diye i
    {
        if(cumle[i]==32) //ascii tab. göre boþluk=32
        {
            sayac++;
        }
        i++;
    }
    printf("Cumlemizdeki kelime sayisi: %d",sayac+1);
    return 0;
}
