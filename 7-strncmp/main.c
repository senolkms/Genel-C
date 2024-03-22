#include <stdio.h>
#include <string.h>
//belirli bir uzunluğa kadar kıyaslama
int main() {
    char str1[] = "hello";
    char str2[] = "help";
    char str3[] = "he";
    char str4[] = "hello";

    int result1 = strncmp(str1, str2, 3);
    int result2 = strncmp(str1, str3, 2);
    int result3 = strncmp(str1, str4, 5);

    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);
    printf("Result3: %d\n", result3);

    return 0;
}
