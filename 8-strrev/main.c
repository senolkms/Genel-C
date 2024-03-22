#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// metniters çevirme
int main()
{
    char senol[100];
    printf("string gir: ");
    scanf("%s",&senol);

    printf("ilk hali: %s\n",senol);
    printf("Ters hali: %s",strrev(senol));

}
