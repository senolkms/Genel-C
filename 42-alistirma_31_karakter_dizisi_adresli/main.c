#include <stdio.h>
#include <stdlib.h>
#define MAX 60

void boy(char tab[MAX],int *a)
{
    int i;
    for(i=0;tab[i]!='\0';i++);
    *a=i;

}

void ortakharf(char tab[MAX],char can[MAX],int *t)
{
    int i,j;
    int kelime1,kelime2;
    boy(tab,&kelime1);
    boy(can,&kelime2);
    *t=0;

    for(i=0;i<kelime1;i++)
    {
        for(j=0;j<kelime2;j++)
        {
            if(tab[i]==can[j])
            {
                *t=*t+1;
            }
        }
    }
}


int main()
{
    char cumle[MAX],tab[MAX];
    int i=0;
    int a;
    int r;
    printf("Cumlenizi giriniz: \n");
    do
    {
        scanf("%c",&cumle[i]);
        i++;
    }
    while(cumle[i-1]!='\n');
    cumle[i-1]='\0';
    boy(cumle,&a);
    printf("Dizimizin boyu: %d\n",a);
    printf("Ýki kelime giriniz: ");
    scanf("%s %s",&cumle,&tab);

    ortakharf(cumle,tab,&r);
    printf("\n %s ve %s %d kadar ortak harfe sahiptir. ",cumle,tab,r);

    return 0;
}
