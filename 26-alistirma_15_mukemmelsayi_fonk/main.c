#include <stdio.h>

int mukemmelSayi(int n) {
    int toplam = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            toplam += i;
        }
    }

    if (toplam == n) {
        return 1; // Mükemmel sayý
    } else {
        return 0; // Mükemmel deðil
    }
}

int main() {
    int altSinir, ustSinir;

    printf("Alt siniri girin: ");
    scanf("%d", &altSinir);

    printf("Ust siniri girin: ");
    scanf("%d", &ustSinir);

    printf("Mukemmel sayilar %d ile %d arasinda:\n", altSinir, ustSinir);

    for (int i = altSinir; i <= ustSinir; i++) {
        if (mukemmelSayi(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
