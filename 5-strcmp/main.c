#include <stdio.h>
#include <string.h>
//ascii koduna göre büyüklük kýyaslama
int main() {
    char str1[] = "elma";
    char str2[] = "armut";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("str1 ve str2 karsilastirildiginda esittir.\n");
    } else if (result < 0) {
        printf("str1 str2'den alfabetik olarak once gelir.\n");
    } else {
        printf("str1 str2'den alfabetik olarak sonra gelir.\n");
    }

    return 0;
}
