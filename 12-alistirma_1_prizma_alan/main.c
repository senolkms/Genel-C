#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    printf("a,b,h degerlerini giriniz: \n");
    scanf("%d %d %d",&a,&b,&h);
    printf("Taban alani: %d\n",a*b);
    printf("Yanal alanalar toplami: %d\n",(2*a*h)+(2*b*h));
    printf("Toplam alanim: %d\n",2*a*b+(2*a*h)+(2*b*h));
    printf("Hacmi: %d",a*b*h);

    return 0;
}
