#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Þenol Kumaþ 220201118

int Palindrom(char kelime[]) {
    int uzunluk = strlen(kelime);
    for (int i = 0; i < uzunluk / 2; i++) {
        if (tolower(kelime[i]) != tolower(kelime[uzunluk - i - 1])) {
            return 0; 
        }
    }
    return 1;
}

void palindromBul(char cumle[]) {
    char* kelime = strtok(cumle, " ,.?!"); 
    int found = 0;
    printf("Alinti cümlesindeki palindrom kelimeler:");
    while (kelime != NULL) {
        if (Palindrom(kelime)) {
			printf(" %s", kelime);
			found=1; 
        }
        kelime = strtok(NULL, " ,.?!");
        if(!found){
        	printf("\nPolindrom kelime yok..");
		}
	}
}

int main() {
    char cumle[1000];
    char alinti[1000];

    printf("Lütfen bir cumle giriniz: ");
    gets(cumle);

    int baslangicIndis = strchr(cumle, '\"') - cumle + 1;
    if (baslangicIndis > 0) {
        int bitisIndis = strchr(cumle + baslangicIndis, '\"') - cumle;
        if (bitisIndis > baslangicIndis) {
            strncpy(alinti, cumle + baslangicIndis, bitisIndis - baslangicIndis);
            alinti[bitisIndis - baslangicIndis] = '\0';
            printf("Alinti: %s\n", alinti);
            palindromBul(alinti); 
        } else {
            printf("Cümlede alinti yok.\n");
        }
    } else {
        printf("Cümlede alinti yok.\n");
    }

    return 0;
}

