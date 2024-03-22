#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    char *p;

    printf("Lutfen bir karakter dizisi giriniz: ");
    gets(arr);

    for(p=arr;*p;p++); //*p karakter dizisinden çıkana kadar
    {

    }
    printf("Dizimiz %s %d kadar karakterden olusmaktadir.",arr,p-arr); //*p şuan '\0' ilk elemanı yani bir çıkarırsak karakter boyu ortaya çıkar
    return 0;
}
