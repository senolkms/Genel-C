#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    int i;

    do{
        printf("Lutfen 1 ile 7 arasinde bir deger giriniz: ");
        scanf("%d",&i);

    }
    while(i<=0 || i>7);
        printf("%d numarali haftanin gunu %s ",i,gun[i-1]);
    return 0;
}
