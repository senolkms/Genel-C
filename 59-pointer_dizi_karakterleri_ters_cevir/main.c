#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[5][50];
    char *p1,*p2;
    int i;
    printf("5 kelime giriniz: \n");
    for(i=0;i<5;i++)
    {
        printf("%d. kelime: ",i+1);
        scanf("%s",kelime[i]);
    }
    for(i=0;i<5;i++)
    {


        printf("%d kelime: ",i+1);

        p1=kelime[i];
        p2=kelime[i] + 5 - 1; //son elemana esitliyoruz

        while(p2>=p1)
        {
            printf("%c",*p2);
            p2--;
        }
        printf("\n");
    }
    return 0;
}
