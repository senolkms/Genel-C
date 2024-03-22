#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,*p1,*p2;
    x=4;
    p1=&x;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    y=*p1;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    y=8;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    p2=&y;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    (*p1)++;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    y=p1;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    y++;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    p2=12;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);
    p1=y;
    printf("%3d %3d %3d %3d %3d %3d\n",x,y,p1,*p1,p2,*p2);

    return 0;
}
