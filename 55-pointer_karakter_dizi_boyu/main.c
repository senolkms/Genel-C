#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    char *p;

    printf("Lutfen bir karakter dizisi giriniz: ");
    gets(arr);

    for(p=arr;*p;p++); //*p karakter dizisinden ��kana kadar
    {

    }
    printf("Dizimiz %s %d kadar karakterden olusmaktadir.",arr,p-arr); //*p �uan '\0' ilk eleman� yani bir ��kar�rsak karakter boyu ortaya ��kar
    return 0;
}
