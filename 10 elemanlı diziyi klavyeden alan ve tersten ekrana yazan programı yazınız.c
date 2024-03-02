#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[9], i = 0;

    while (i < 9) {
        printf("Bir sayi giriniz\n");
        scanf("%d", &n[i]);
        i++;
    }

    i = 8;
   printf("sonuc\n");
    while (i >= 0) {
        printf("%d\n", n[i]);
        i--;
    }

    return 0;
}
