#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{

char ad[10];
char soyad[10];
int yas;
};

int main()
{
   struct ogrenci can={"Can","Boz",27};
   /*strcpy(can.ad,"Can");
   strcpy(can.soyad,"Boz");
   can.yas=27;*/

   printf("%s \t %s \t %d",can.ad,can.soyad,can.yas);

    return 0;
}
