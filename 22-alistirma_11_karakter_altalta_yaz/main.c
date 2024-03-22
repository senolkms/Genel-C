#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char cumle[100];
    printf("Cumlenizi giriniz: ");
    gets(cumle);

    for(i=0;cumle[i];i++)
    {
        if(cumle[i]==i)
        {
            printf("%c\n",cumle[i]);
        }

    }
    return 0;
}
