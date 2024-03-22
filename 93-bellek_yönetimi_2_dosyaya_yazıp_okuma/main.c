#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    int *p,N,i,c;
    printf("Uretilecek sayi miktarini giriniz: ");
    scanf("%d",&N);
    p=(int *)malloc(N*sizeof(int));
    dosya=fopen("sayi.txt","w");
    printf("Uretilen sayilar: ");
    srand(time(0));
    for(i=0;i<N;i++)
    {
        *(p+i)=rand()%100;
        fprintf(dosya,"%d ",*(p+i));
        printf("%d ",*(p+i));
    }
    fclose(dosya);
    printf("\nOkunan sayilar: ");
    dosya=fopen("sayi.txt","r");
    do{
        c=getc(dosya);
        if(c != EOF)
        {
            putchar(c);
        }
    }while(c != EOF);
    fclose(dosya);
    free(p);
    return 0;
}
