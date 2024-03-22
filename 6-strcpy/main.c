#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char senol[]="Senol is the best!";
    char sen[100];

    strcpy(sen,senol);

    printf("%s",sen);
    return 0;
}
