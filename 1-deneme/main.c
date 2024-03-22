#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&s[i]);
        for(int j=0; j<3; j++)
        {
            printf("%d ",s[j]);
        }
    }

    return 0;
}
