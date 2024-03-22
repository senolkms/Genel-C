#include <stdio.h>
#include <stdlib.h>

void ekle(int a[],int elemansayisi,int deger,int sirano)
{
    int i;
    if(sirano<=elemansayisi+1)
    {
        for(i=elemansayisi-1;i>=sirano-1;i--)
        {
            a[i+1]=a[i];
        }
        a[sirano-1]=deger;
        printf("\nEkleme sonrasi dizi: \n");
        for(i=0;i<elemansayisi+1;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
        printf("Gecerli sira no girmediniz !! ");
}

int main()
{
    int n,i,sirasi,deger;
    printf("Adet sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));

    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\nHangi siraya eleman eklenecek: ");
    scanf("%d",&sirasi);
    printf("\nnEklenecek deger:  ");
    scanf("%d",&deger);
    ekle(dizi,n,deger,sirasi);

}
