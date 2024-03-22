#include <stdio.h>
#include <string.h>
// string birleþtirme
int main() {
    char str1[50] = "Merhaba, ";
    const char str2[] = "Dunya!";

    strcat(str1, str2);

    printf("Birlestirilmis string: %s\n", str1);

    /* char bos[100];
    strcpy(bos,"benim");

    strcat(bos,"adim");
    strcat(bos,"senol");
    printf("%s",bos);*/

    return 0;
}
