#include <stdio.h>
#include <stdlib.h>

void degistir(int *ad1,int *ad2)
{
    int gecici;
    gecici=*ad1;
    *ad1=*ad2;
    *ad2=gecici;


}
/*void degistir(int ad1,int ad2)
{
    int gecici;
    gecici=ad1;
    ad1=ad2;
    ad2=gecici;
    printf("�lk sayim %d ikinci sayim %d",a,b);

int main()
{
   int a=10,b=20;
   printf("Cagirmadan once %d %d\n",a,b);
   degistir(a,b);
   printf("Cagirdiktan sonra %d %d",a,b);

    return 0;
}

}*/


int main()
{
   int a=10,b=20;
   printf("Cagirmadan once %d %d\n",a,b);
   degistir(&a,&b);
   printf("Cagirdiktan sonra %d %d",a,b);

    return 0;
}
