#include <stdio.h>
#include <stdlib.h>

int faktoriyel (int s1)
{
    int i,sonuc=1;
    for(i=1;i<=s1;i++)
    {
        sonuc=sonuc*i;
    }
    return sonuc;
}

int main()
{
    int sayi;
    printf("Sayý giriniz: \n");
    scanf("%d",&sayi);

    printf("%d sayinin faktoriyeli: %d",sayi,faktoriyel(sayi));
    return 0;
}
