#include <stdio.h>
#include <stdlib.h>

void bastir (int *arr,int size)
{


    int arrEnd;
    arrEnd = (arr + size-1);
    while(arr<=arrEnd)
    {
        scanf("%d",arr++);
    }

    /*
    int i;
    int *ptr;
    ptr=arr;
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    for(i=0;i<size;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    } */

}

int ara (int *arr,int size,int toSearch)
{
    int arrEnd,index=0;
    arrEnd = (arr + size-1);
    while(arr<=arrEnd && *arr != toSearch)
    {
        arr++;
        index++;
    }
    if(arr<=arrEnd )
    {
        return index;
    }
    return -1;

}

int main()
{
    int array[100];
    int size,toSearch,searchIndex;

    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&size);

    printf("\nDizinin elemanlarini giriniz: ");
    bastir(array,size);

    printf("Aradiginiz elemani giriniz: ");
    scanf("%d",&toSearch);

    searchIndex=ara(array,size,toSearch);
    if(searchIndex== -1)
    {
        printf("%d elemani dizide bulunmuyor. ",toSearch);
    }
    else
        printf("%d elemani dizinin %d. sirasinda bulunuyor ",toSearch,searchIndex+1);

    return 0;
}
