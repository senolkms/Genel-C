#include <stdio.h>
#include <stdlib.h>


union test
{
    int x;
    double y;
};


int main()
{
    union test t;

    t.x=2;
    printf("%d\n",t.x);

    printf("Union imizin tuttugu alan %d byte tir\n",sizeof(t));

    t.y=10;
    printf("%.2f",t.y);
    return 0;
}
