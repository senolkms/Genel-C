#include <stdio.h>
#include <stdlib.h>

typedef struct {
float x_ekseni;
float y_ekseni;
}nokta;

int main()
{
    nokta can;
    can.x_ekseni=3.154446545;
    can.y_ekseni=2.26474186;

    printf("X eksenimiz %.2f Y eksenimiz %.2f",can.x_ekseni,can.y_ekseni);
    return 0;
}
