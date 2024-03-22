#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *ptr;


    printf("Dizimizin ilk hali: \n\n");
    for(ptr=dizi;ptr<dizi+15;ptr++)
    {
        printf("%3d",*ptr);
    }

    printf("\n\n\n");
    for(ptr=dizi;ptr<dizi+15;ptr+=2)
    {
        printf("%3d",*ptr);
    }
    printf("\n\n\n");
    for(ptr=dizi+1;ptr<dizi+15;ptr+=2)
    {
        printf("%3d",*ptr);
    }
    return 0;
}
