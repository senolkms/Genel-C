#include <stdio.h>
#include <stdlib.h>

void ustunu_al(int x,int y,int *sonuc)
{
    *sonuc=1;
    for(int i=0; i<y;i++)
    {
        *sonuc=*sonuc*x;
    }
}
int main()
{
    int x=3,y=5,sonuc;
    ustunu_al(x,y,&sonuc);
    printf("%d",sonuc);
}
