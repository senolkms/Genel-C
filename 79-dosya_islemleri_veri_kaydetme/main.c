#include <stdio.h>
#include <stdlib.h>

int main()
{
   // fputs() -->Dosyaya bir karakter dizisi kaydeder
    //fprintf() -->Dosyaya biçimlendirilmiş veri kaydetmek için kullanıyorum
    //FILE *dosya;
    //dosya=fopen("can.txt","w");
    //fclose(dosya);

    /* FILE *dosya;
     char isim[]="Can";
     dosya=fopen("canan.txt","w");
     fprintf(dosya,"Bu dosya %s 'in dosyasidir",isim);
     fclose(dosya);*/

     /* FILE *dosya;
      dosya=fopen("carpimTablosu.txt","w");

      int i,j;
      for(i=1;i<=10;i++)
      {
          for(j=1;j<=10;j++)
          {
              fprintf(dosya,"%d * %d = %d\n",i,j,i*j);
          }
          fprintf(dosya,"\n");
      }
      fclose(dosya);*/


     /* FILE *dosya;
      dosya=fopen("ogrenci.txt","a");
      char isim[20],okul[50],bolum[50];

      printf("Adiniz :");gets(isim);
      printf("Okulunuz:");gets(okul);
      printf("Bolumunuz:");gets(bolum);

      fprintf(dosya,"%s\n %s\n %s\n",isim,okul,bolum);

      fclose(dosya);*/

      FILE *dosya;
      dosya=fopen("merhaba.txt","a");
      fputs("\nHoppala",dosya);
      fclose(dosya);

    return 0;



}
