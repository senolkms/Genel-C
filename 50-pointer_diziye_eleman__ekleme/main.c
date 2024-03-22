#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    //Kullanıcıya kaç elemanlı bir sayı dizisi oluşturmak istediğini sorun
    //Pointer kullanarak elemanları tek tek alın ve console a bastırın

    int arr[100];
    int N;
    int *ptr;
    ptr=arr;




    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr; //adres yukarda artt��� icin tekrar ba�a al�yoruz
    printf("Degerlerim:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

    return 0;







}
